#ifndef KRUSKAL_H_INCLUDED
#define KRUSKAL_H_INCLUDED

#include "minimalSpanningTree.h"
#include "usableEdges.h"
#include "disjointSet.h"
#include <algorithm>

class Kruskal
{
public:
	static MinimalSpanningTree constructMinimalSpanningTree(vector<Node> &nodes);
	
	static MinimalSpanningTree extendMinimalSpanningTree(MinimalSpanningTree &mst, Node &node);
	static MinimalSpanningTree extendMinimalSpanningTree(MinimalSpanningTree &mst, vector<Node> &nodes);

private:
	static vector<Edge> getAllEdges(vector<Node> &nodes);
	static vector<Edge> getAllEdgesBeta(vector<Node> &nodes);
	
    static vector<Edge> getExtraMSTEdges(MinimalSpanningTree &mst, vector<Node> &nodes);
	static vector<Edge> getAllExtraMSTEdges(MinimalSpanningTree &mst, vector<Node> &nodes);
	
public:
template<class T>
	static vector<T> Merge(vector<T> &a, vector<T> &b)
	{
		vector<T> c = a;
		c.reserve(a.size()+b.size());
		for(T& t : b) c.push_back(t);
		return c;
	}
};

#endif // KRUSKAL_H_INCLUDED

