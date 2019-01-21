// Using C++11 language standard.
// Function to_string may cause problems on some compilers.

#include "MSTheuristic.h"
#include "multiswarm.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/// Sluzi za racunanje rezultata jedne instance i crtanje rjesenja zajedno s pozicijama svih rojeva.
int main()
{
    const int k = 5;                           /// BROJ STEINEROVIH TOCAKA
    const int swarm_size = 500;                 /// VELICINA SWARMA
    const double w1 = 0.90;                        /// PARAMETAR W1
    const double w2 = 0.10;                        /// PARAMETAR W2
    ifstream in("instances/stp10/stp10a");      /// IME PRIMJERA
    ofstream out("txt/results.txt");
    ofstream steinerPoints1("txt/drawSwarms/steinerPoints1.txt");
    ofstream steinerPoints10("txt/drawSwarms/steinerPoints10.txt");
    ofstream steinerPoints20("txt/drawSwarms/steinerPoints20.txt");
    ofstream steinerPoints30("txt/drawSwarms/steinerPoints30.txt");
    ofstream steinerPoints40("txt/drawSwarms/steinerPoints40.txt");
    ofstream steinerPoints50("txt/drawSwarms/steinerPoints50.txt");
    ofstream edges1("txt/drawSwarms/edges1.txt");
    ofstream edges10("txt/drawSwarms/edges10.txt");
    ofstream edges20("txt/drawSwarms/edges20.txt");
    ofstream edges30("txt/drawSwarms/edges30.txt");
    ofstream edges40("txt/drawSwarms/edges40.txt");
    ofstream edges50("txt/drawSwarms/edges50.txt");
    ofstream allSwarms1("txt/drawSwarms/allSwarms1.txt");
    ofstream allSwarms10("txt/drawSwarms/allSwarms10.txt");
    ofstream allSwarms20("txt/drawSwarms/allSwarms20.txt");
    ofstream allSwarms30("txt/drawSwarms/allSwarms30.txt");
    ofstream allSwarms40("txt/drawSwarms/allSwarms40.txt");
    ofstream allSwarms50("txt/drawSwarms/allSwarms50.txt");

    int n;
    in >> n;
    vector<Node> nodes;
    for(int j=0; j<n; j++)
    {
        double x,y;
        in >> x >> y;
        nodes.push_back(Node(x,y));
    }

/// MINIMAL SPANNING TREE
    MinimalSpanningTree mst = Kruskall::constructMinimalSpanningTree(nodes);
    double mstBottleneck = mst.getBottleneck();

/// MST HEURISTIC
    SteinerTree st1 = MSTheuristic::getSteinerTree(nodes,k);
    double bottleneck1 = st1.getBottleneck().getLength();
    double avg1 = 100*bottleneck1/mstBottleneck;

/// MULTISWARM HEURISTIC
    MultiSwarm multiswarm(nodes, k, swarm_size, w1, w2);

/// 1 evolucija
    multiswarm.evolve(1);
    SteinerTree st2 = multiswarm.getSteinerTree();
    double bottleneck2 = st2.getBottleneck().getLength();
    double avg2 = 100*bottleneck2/mstBottleneck;
    steinerPoints1 << k << endl;
    for(Node& point : st2.getSteinerPoints())
        steinerPoints1 << fixed << setprecision(7) << point.getX() << " " << fixed << setprecision(7) << point.getY() << endl;
    for(Edge& edge : st2.getEdges())
        edges1 << fixed << setprecision(7) << edge.getA().getX() << " " << fixed << setprecision(7) << edge.getA().getY() << " "
              << fixed << setprecision(7) << edge.getB().getX() << " " << fixed << setprecision(7) << edge.getB().getY() << endl;
    vector< vector<Particle> > swarms = multiswarm.getParticles();
    allSwarms1 << swarm_size*swarms.size() << endl;
    for(int i=0; i<swarms.size(); i++)
        for(int j=0; j<swarms[i].size(); j++)
            allSwarms1 << fixed << setprecision(7) << swarms[i][j].getX() << " " << fixed << setprecision(7) << swarms[i][j].getY() << endl;
    out << "1 EVOLUTION: MSTheuristic(%) = " << avg1 << " multiswarm(%) = " << avg2 << endl;

/// 10 evolucija
    multiswarm.evolve(9);
    st2 = multiswarm.getSteinerTree();
    bottleneck2 = st2.getBottleneck().getLength();
    avg2 = 100*bottleneck2/mstBottleneck;
    steinerPoints10 << k << endl;
    for(Node& point : st2.getSteinerPoints())
        steinerPoints10 << fixed << setprecision(7) << point.getX() << " " << fixed << setprecision(7) << point.getY() << endl;
    for(Edge& edge : st2.getEdges())
        edges10 << fixed << setprecision(7) << edge.getA().getX() << " " << fixed << setprecision(7) << edge.getA().getY() << " "
              << fixed << setprecision(7) << edge.getB().getX() << " " << fixed << setprecision(7) << edge.getB().getY() << endl;
    swarms = multiswarm.getParticles();
    allSwarms10 << swarm_size*swarms.size() << endl;
    for(int i=0; i<swarms.size(); i++)
        for(int j=0; j<swarms[i].size(); j++)
            allSwarms10 << fixed << setprecision(7) << swarms[i][j].getX() << " " << fixed << setprecision(7) << swarms[i][j].getY() << endl;
    out << "10 EVOLUTIONS: MSTheuristic(%) = " << avg1 << " multiswarm(%) = " << avg2 << endl;

/// 20 evolucija
    multiswarm.evolve(10);
    st2 = multiswarm.getSteinerTree();
    bottleneck2 = st2.getBottleneck().getLength();
    avg2 = 100*bottleneck2/mstBottleneck;
    steinerPoints20 << k << endl;
    for(Node& point : st2.getSteinerPoints())
        steinerPoints20 << fixed << setprecision(7) << point.getX() << " " << fixed << setprecision(7) << point.getY() << endl;
    for(Edge& edge : st2.getEdges())
        edges20 << fixed << setprecision(7) << edge.getA().getX() << " " << fixed << setprecision(7) << edge.getA().getY() << " "
              << fixed << setprecision(7) << edge.getB().getX() << " " << fixed << setprecision(7) << edge.getB().getY() << endl;
    swarms = multiswarm.getParticles();
    allSwarms20 << swarm_size*swarms.size() << endl;
    for(int i=0; i<swarms.size(); i++)
        for(int j=0; j<swarms[i].size(); j++)
            allSwarms20 << fixed << setprecision(7) << swarms[i][j].getX() << " " << fixed << setprecision(7) << swarms[i][j].getY() << endl;
    out << "20 EVOLUTIONS: MSTheuristic(%) = " << avg1 << " multiswarm(%) = " << avg2 << endl;

/// 30 evolucija
    multiswarm.evolve(10);
    st2 = multiswarm.getSteinerTree();
    bottleneck2 = st2.getBottleneck().getLength();
    avg2 = 100*bottleneck2/mstBottleneck;
    steinerPoints30 << k << endl;
    for(Node& point : st2.getSteinerPoints())
        steinerPoints30 << fixed << setprecision(7) << point.getX() << " " << fixed << setprecision(7) << point.getY() << endl;
    for(Edge& edge : st2.getEdges())
        edges30 << fixed << setprecision(7) << edge.getA().getX() << " " << fixed << setprecision(7) << edge.getA().getY() << " "
              << fixed << setprecision(7) << edge.getB().getX() << " " << fixed << setprecision(7) << edge.getB().getY() << endl;
    swarms = multiswarm.getParticles();
    allSwarms30 << swarm_size*swarms.size() << endl;
    for(int i=0; i<swarms.size(); i++)
        for(int j=0; j<swarms[i].size(); j++)
            allSwarms30 << fixed << setprecision(7) << swarms[i][j].getX() << " " << fixed << setprecision(7) << swarms[i][j].getY() << endl;
    out << "30 EVOLUTIONS: MSTheuristic(%) = " << avg1 << " multiswarm(%) = " << avg2 << endl;

/// 40 evolucija
    multiswarm.evolve(10);
    st2 = multiswarm.getSteinerTree();
    bottleneck2 = st2.getBottleneck().getLength();
    avg2 = 100*bottleneck2/mstBottleneck;
    steinerPoints40 << k << endl;
    for(Node& point : st2.getSteinerPoints())
        steinerPoints40 << fixed << setprecision(7) << point.getX() << " " << fixed << setprecision(7) << point.getY() << endl;
    for(Edge& edge : st2.getEdges())
        edges40 << fixed << setprecision(7) << edge.getA().getX() << " " << fixed << setprecision(7) << edge.getA().getY() << " "
              << fixed << setprecision(7) << edge.getB().getX() << " " << fixed << setprecision(7) << edge.getB().getY() << endl;
    swarms = multiswarm.getParticles();
    allSwarms40 << swarm_size*swarms.size() << endl;
    for(int i=0; i<swarms.size(); i++)
        for(int j=0; j<swarms[i].size(); j++)
            allSwarms40 << fixed << setprecision(7) << swarms[i][j].getX() << " " << fixed << setprecision(7) << swarms[i][j].getY() << endl;
    out << "40 EVOLUTIONS: MSTheuristic(%) = " << avg1 << " multiswarm(%) = " << avg2 << endl;

/// 50 evolucija
    multiswarm.evolve(10);
    st2 = multiswarm.getSteinerTree();
    bottleneck2 = st2.getBottleneck().getLength();
    avg2 = 100*bottleneck2/mstBottleneck;
    steinerPoints50 << k << endl;
    for(Node& point : st2.getSteinerPoints())
        steinerPoints50 << fixed << setprecision(7) << point.getX() << " " << fixed << setprecision(7) << point.getY() << endl;
    for(Edge& edge : st2.getEdges())
        edges50 << fixed << setprecision(7) << edge.getA().getX() << " " << fixed << setprecision(7) << edge.getA().getY() << " "
              << fixed << setprecision(7) << edge.getB().getX() << " " << fixed << setprecision(7) << edge.getB().getY() << endl;
    swarms = multiswarm.getParticles();
    allSwarms50 << swarm_size*swarms.size() << endl;
    for(int i=0; i<swarms.size(); i++)
        for(int j=0; j<swarms[i].size(); j++)
            allSwarms50 << fixed << setprecision(7) << swarms[i][j].getX() << " " << fixed << setprecision(7) << swarms[i][j].getY() << endl;
    out << "50 EVOLUTIONS: MSTheuristic(%) = " << avg1 << " multiswarm(%) = " << avg2 << endl;


    in.close();
    out.close();
    steinerPoints1.close();
    steinerPoints10.close();
    steinerPoints20.close();
    steinerPoints30.close();
    steinerPoints40.close();
    steinerPoints50.close();
    edges1.close();
    edges10.close();
    edges20.close();
    edges30.close();
    edges40.close();
    edges50.close();
    allSwarms1.close();
    allSwarms10.close();
    allSwarms20.close();
    allSwarms30.close();
    allSwarms40.close();
    allSwarms50.close();

    return 0;
}

