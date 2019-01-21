#ifndef MINIMALSPANNIGTREE_H_INCLUDED
#define MINIMALSPANNIGTREE_H_INCLUDED

#include "edge.h"
#include <vector>

/// EDGES ARE SORTED BY LENGTH FROM SHORTEST TO LONGEST
/// class MinimalSpanningTree does not guarantee that but we sort edges in Kruskall algorithm

class MinimalSpanningTree
{
private:
    vector<Node> nodes;
    vector<Edge> edges;
    
public:
	MinimalSpanningTree(vector<Node> &_nodes,vector<Edge> &_edges) : nodes(_nodes), edges(_edges) {}        // constructor

    MinimalSpanningTree(const MinimalSpanningTree & t) : nodes(t.nodes), edges(t.edges) {}                  // copy constructor
    MinimalSpanningTree(MinimalSpanningTree && t) noexcept : nodes(move(t.nodes)), edges(move(t.edges)) {}  // move constructor

    MinimalSpanningTree& operator=(const MinimalSpanningTree & t);                               // copy assignment operator
    MinimalSpanningTree& operator=(MinimalSpanningTree && t) noexcept;                           // move assignment operator

    vector<Node>& getNodes() { return nodes; }
    vector<Edge>& getEdges() { return edges; }

	double getSqBottleneck() const;
	double getBottleneck() const;

	string toString();
	
	friend bool operator<(const MinimalSpanningTree& mst1, const MinimalSpanningTree& mst2);
};

#endif // MINIMALSPANNIGTREE_H_INCLUDED
