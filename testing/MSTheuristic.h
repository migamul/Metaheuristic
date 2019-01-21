#ifndef MSTHEURISTIC_H_INCLUDED
#define MSTHEURISTIC_H_INCLUDED

#include "line.h"
#include "kruskal.h"
#include "steinerTree.h"
#include <list>

class MSTheuristic
{
public:
    static SteinerTree getSteinerTree(vector<Node> &nodes, int k);

private:
    static list<Line> convertToLines(vector<Edge> &edges);

	static vector<Edge> getNewLines(Node& a, Node& b, vector<Node> &steinerpoints);

	static vector<Node> getSteinerPoints(Node& a, Node& b, int k);
};

#endif // MSTHEURISTIC_H_INCLUDED
