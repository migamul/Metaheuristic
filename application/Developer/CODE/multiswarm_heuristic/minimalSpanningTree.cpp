#include "minimalSpanningTree.h"

MinimalSpanningTree& MinimalSpanningTree::operator=(const MinimalSpanningTree & t)       // copy assignment operator
{
    nodes = t.nodes;
    edges = t.edges;
    return *this;
}

MinimalSpanningTree& MinimalSpanningTree::operator=(MinimalSpanningTree && t) noexcept   // move assignment operator
{
    nodes = move(t.nodes);
    edges = move(t.edges);
    return *this;
}

double MinimalSpanningTree::getSqBottleneck() const 
{
    return edges.back().getSquaredLength(); 
}

double MinimalSpanningTree::getBottleneck() const
{
    return edges.back().getLength();
}

//string MinimalSpanningTree::toString()
//{
//    string s = "TREE \n Points:";
//    for(Node n : nodes)
//        s += n.toString() + "\n";
//    s += "Lines:\n";
//    for(Edge e : edges)
//        s += e.toString() + "\n";
//    return s;
//}

bool operator<(const MinimalSpanningTree& mst1, const MinimalSpanningTree& mst2)
{
    return mst1.getSqBottleneck() < mst2.getSqBottleneck();
}
