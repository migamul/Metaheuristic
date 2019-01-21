#ifndef USABLELINES_H_INCLUDED
#define USABLELINES_H_INCLUDED

#include "edge.h"
#include <vector>

// A class representing the possible edges to use for adding a new point to a minimal spanning tree.
class UsableEdges
{
private:
    vector<Edge> edges;
	Node node;

public:
    static const int MAX = 7;

private:
    int getBottleneck();

public:
    UsableEdges(Node& _node) : node(_node) {}       // constructor

	vector<Edge> getEdges() const { return edges; }

	void add(Node& _node);
	void add(vector<Node> &nodes);

	void addAll(Node& _node);
	void addAll(vector<Node> &nodes);
};

#endif // USABLEEDGES_H_INCLUDED
