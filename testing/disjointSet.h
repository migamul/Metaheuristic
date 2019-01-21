#ifndef DISJOINTSET_H_INCLUDED
#define DISJOINTSET_H_INCLUDED

#include "edge.h"
#include <vector>

//  A data structure that keeps track of a set of elements partitioned into a number of disjoint (non-overlapping) subsets.
//  It provides near-constant-time operations (bounded by the inverse Ackermann function) to add new sets,
//  to merge existing sets, and to determine whether elements are in the same set.
//  http://en.wikipedia.org/wiki/Disjoint-set_data_structure
class DisjointSet
{
private:
    vector<Node>* nodes;

public:
    DisjointSet(vector<Node>* _nodes) : nodes(_nodes) {}

//	Altered find method to decrease the amortized cost.
//	http://en.wikipedia.org/wiki/Disjoint-set_data_structure
    int Find(int i);

//	x and y are not already in same set. Merge them.
//	http://en.wikipedia.org/wiki/Disjoint-set_data_structure
	void Union(int x, int y);

	bool sameSet(int x, int y);

    void reset(vector<Node> &nodes);
    void reset(vector<Node> &nodes, int offset);
};

#endif // DISJOINTSET_H_INCLUDED
