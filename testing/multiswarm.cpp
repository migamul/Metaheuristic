#include "multiswarm.h"

MultiSwarm::MultiSwarm(vector<Node> &nodes, int _maks, int _swarmsize, double _w1, double _w2)   // constructor
    : basic(Kruskal::constructMinimalSpanningTree(nodes)), best(basic), maks(_maks), swarmsize(_swarmsize), w1(_w1), w2(_w2)
{
    min_X = nodes.front().getX();   max_X = min_X;
    min_Y = nodes.front().getY();   max_Y = min_Y;
    for(Node& node : nodes)
    {
        double x = node.getX();
        if(x < min_X) min_X = x;
        else if(x > max_X) max_X = x;

        double y = node.getY();
        if(y < min_Y) min_Y = y;
        else if(y > max_Y) max_Y = y;
    }

    r_engine.seed( std::time(nullptr) );
}

void MultiSwarm::evolve(int amount)
{
    for(int i=0; i<amount; i++) evolve();
}

void MultiSwarm::evolve()
{
    while((int) swarms.size() < maks) tryNewSwarm();
    fly();
}

SteinerTree MultiSwarm::getSteinerTree()
{
    vector<Node> steinerNodes = getSteinerNodes();
    SteinerTree st(basic.getNodes(), best.getEdges(), steinerNodes);
    return st;
}

void MultiSwarm::tryNewSwarm()
{
    vector<Particle> particles = generateParticles();
    for(Particle& p : particles)
    {
        Node node(p.getX(),p.getY());
        MinimalSpanningTree temp = Kruskal::extendMinimalSpanningTree(best,node);

        if(temp < best)
        {
            best = temp;
            Swarm s(particles,node);
            swarms.push_back(move(s));
            break;
        }
    }
}

void MultiSwarm::fly()
{
    list<Swarm>::iterator li = swarms.begin();
    while(li != swarms.end())
    {
        vector<Node> nodes = getOtherSteinerNodes(li->getNode());
        MinimalSpanningTree temp = Kruskal::extendMinimalSpanningTree(basic,nodes);
        for(Particle& p : li->getParticles())
        {
            updateParticle(p,li->getNode());
            Node node(p.getX(),p.getY());
            MinimalSpanningTree candidate = Kruskal::extendMinimalSpanningTree(temp,node);
            if(candidate < best)
            {
                best = candidate;
                li->setNode(node);
            }
        }
        if( !(best < temp) )
        {
            swarms.erase(li++);
            best = temp;
        }
        else li++;
    }
}


void MultiSwarm::updateParticle(Particle& p, Node& node)
{
    uniform_real_distribution<> d(0, 1);
    double x = d(r_engine);
    double y = d(r_engine);
    x *= w2 * (node.getX() - p.getX());
    y *= w2 * (node.getY() - p.getY());
    p.updateVelocity(w1, x, y);
    p.fly();
}

vector<Node> MultiSwarm::getOtherSteinerNodes(Node& node)
{
    vector<Node> nodes;
    for(Swarm& swarm : swarms)
        if( !(swarm.getNode() == node) ) nodes.push_back(swarm.getNode());
    return nodes;
}

vector<Node> MultiSwarm::getSteinerNodes()
{
    vector<Node> nodes;
    nodes.reserve(swarms.size());
    for(Swarm& swarm : swarms) nodes.push_back(swarm.getNode());
    return nodes;
}

vector<Particle> MultiSwarm::generateParticles()
{
    uniform_real_distribution<> x(min_X, max_X);
    uniform_real_distribution<> y(min_Y, max_Y);

    vector<Particle> particles;
    particles.reserve(swarmsize);
    for(int i=0;i<swarmsize;i++)
        particles.push_back(Particle(x(r_engine),y(r_engine)));

    return particles;
}

vector< vector<Particle> > MultiSwarm::getParticles()
{
    vector< vector<Particle> > particles;
    for(Swarm& swarm: swarms)
        particles.push_back(swarm.getParticles());
    return particles;
}
