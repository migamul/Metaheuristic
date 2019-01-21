#ifndef STEINERTREE_H_INCLUDED
#define STEINERTREE_H_INCLUDED

#include "edge.h"
#include <vector>

// This class represents a tree in the 2-dimensional euclidean space.
// EDGES NOT ARE SORTED

class SteinerTree
{
private:
    vector<Node> nodes;
	vector<Edge> edges;
	vector<Node> steinerPoints;
	
public:
	SteinerTree(vector<Node> &_nodes, vector<Edge> &_edges, vector<Node> &_steinerPoints)      // constructor
                : nodes(_nodes), edges(_edges), steinerPoints(_steinerPoints) {}

    SteinerTree(const SteinerTree & t) : nodes(t.nodes), edges(t.edges), steinerPoints(t.steinerPoints) {}      // copy constructor
    SteinerTree(SteinerTree && t) noexcept : nodes(move(t.nodes)), edges(move(t.edges)), steinerPoints(move(t.steinerPoints)) {}           // move constructor

    SteinerTree& operator=(const SteinerTree & t);          // copy assignment operator
    SteinerTree& operator=(SteinerTree && t) noexcept;      // move assignment operator

	vector<Node> getNodes() const { return nodes; }
	vector<Edge> getEdges() const { return edges; }
	vector<Node> getSteinerPoints() const { return steinerPoints; }

	Edge getBottleneck();

	string toString();
};

#endif //STEINERTREE_H_INCLUDED
