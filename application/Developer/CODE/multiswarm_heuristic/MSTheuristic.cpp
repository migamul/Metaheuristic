#include "MSTheuristic.h"

SteinerTree MSTheuristic::getSteinerTree(vector<Node> &nodes, int k)
{
    MinimalSpanningTree tree = Kruskal::constructMinimalSpanningTree(nodes);
    list<Line> lines = convertToLines(tree.getEdges());

    for(int i=0; i<k; i++)
    {
        lines.sort();
        lines.back().addSteinerpoint();
    }

    vector<Node> steinerPoints;
    vector<Edge> newedges;
    for(Line& line : lines)
    {
        if(line.getSteinerpoints() > 0)
        {
            vector<Node> linepoints = getSteinerPoints(line.getA(),line.getB(),line.getSteinerpoints());
            for(Node& node : linepoints) steinerPoints.push_back(node);
            vector<Edge> linelines = getNewLines(line.getA(),line.getB(),linepoints);
            for(Edge& lineline : linelines) newedges.push_back(lineline);
        }
        else newedges.push_back(line);
    }

    SteinerTree st(tree.getNodes(), newedges, steinerPoints);
    return st;
}
	
list<Line> MSTheuristic::convertToLines(vector<Edge> &edges)
{
    list<Line> lines;
    for (Edge& edge : edges)
        lines.push_back(Line(edge.getA(),edge.getB()));
    return lines;
}
	
vector<Edge> MSTheuristic::getNewLines(Node& a, Node& b, vector<Node> &steinerpoints)
{
    vector<Edge> lines;
    int s = steinerpoints.size();
    lines.push_back(Line(a,steinerpoints[0]));
    for (int i = 1; i < s; i++)
        lines.push_back(Line(steinerpoints[i-1],steinerpoints[i]));
    lines.push_back(Line(steinerpoints[s-1],b));
    return lines;
}

vector<Node> MSTheuristic::getSteinerPoints(Node& a, Node& b, int k)
{
    vector<Node> steinerpoints;
    for(int i=0;i<k;i++)
    {
        double xa = a.getX(),
                xb = b.getX(),
                ya = a.getY(),
                yb = b.getY();
                   
        double x = xa + (i+1)*(xb-xa)/(k+1);
        double y = ya + (i+1)*(yb-ya)/(k+1);
        steinerpoints.push_back(Node(x,y));
    }
    return steinerpoints;
}
