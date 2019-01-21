#include "steinerTree.h"

SteinerTree& SteinerTree::operator=(const SteinerTree & t)           // copy assignment operator
{
    nodes = t.nodes;
    edges = t.edges;
    steinerPoints = t.steinerPoints;
    return *this;
}
    
SteinerTree& SteinerTree::operator=(SteinerTree && t) noexcept       // move assignment operator
{
    nodes = move(t.nodes);
    edges = move(t.edges);
    steinerPoints = move(t.steinerPoints);
    return *this;
}    

Edge SteinerTree::getBottleneck()
{
    Edge bottleneck = edges[0];
    for(Edge& edge: edges)
        if (edge.getSquaredLength() > bottleneck.getSquaredLength()) bottleneck = edge;
    return bottleneck;
}
	
//string SteinerTree::toString()
//{
//    string s = "TREE \n Points:\n";
//    for(Node& n : nodes)
//        s += n.toString() + "\n";
//    s += "SteinerPoints:\n";
//    for(Node& n : steinerPoints)
//        s += n.toString() + "\n";
//    s += "Lines:\n";
//    for(Edge& e : edges)
//        s += e.toString() + "\n";
//    return s;
//}
