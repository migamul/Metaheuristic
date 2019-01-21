#include "usableEdges.h"

int UsableEdges::getBottleneck()
{
    int bottleneck = 0;
    for(unsigned int i=1; i < edges.size(); i++)
        if( edges[i].getSquaredLength() > edges[bottleneck].getSquaredLength()) bottleneck = i;
    return bottleneck;
}

void UsableEdges::add(Node& _node)
{
    if( node.getX()!=_node.getX() || node.getY()!=_node.getY() )
    {
        Edge edge(node,_node);
        if(edges.size() < MAX) {
            edges.push_back(edge);
        }
        else {
            int bottleneck = getBottleneck();
            if(edge.getSquaredLength() < edges[bottleneck].getSquaredLength()) {
                edges.erase(edges.begin() + bottleneck);
                edges.push_back(edge);
            }
        }
    }
}

void UsableEdges::add(vector<Node> &nodes)
{
    for(Node& node: nodes) add(node);
}

void UsableEdges::addAll(Node& _node)
{
    if( node.getX()!=_node.getX() || node.getY()!=_node.getY() )
        edges.push_back(Edge(node,_node));
}

void UsableEdges::addAll(vector<Node> &nodes)
{
    for(Node& node: nodes) addAll(node);
}
