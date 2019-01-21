#include "disjointSet.h"

int DisjointSet::Find(int i)
{
    if ((*nodes)[i].getParent() != i)
        (*nodes)[i].setParent( Find((*nodes)[i].getParent()) );
    return (*nodes)[i].getParent();
}

void DisjointSet::Union(int x, int y)
{
    int xRoot = Find(x);
    int yRoot = Find(y);

    if ((*nodes)[xRoot].getRank() < (*nodes)[yRoot].getRank()) 
    {
        (*nodes)[xRoot].setParent(yRoot);
    }
    else if ((*nodes)[xRoot].getRank() > (*nodes)[yRoot].getRank()) 
    {
        (*nodes)[yRoot].setParent(xRoot);
    }
    else
    {
        (*nodes)[yRoot].setParent(xRoot);
        (*nodes)[xRoot].increaseRank();
    }
}

bool DisjointSet::sameSet(int x, int y)
{
    return Find(x) == Find(y);
}

void DisjointSet::reset(vector<Node> &nodes)
{
    for(int i=0; i<(int)nodes.size(); i++)
    {
        nodes[i].setMe(i);
        nodes[i].setParent(i);
        nodes[i].setRank(0);
    }
}   

void DisjointSet::reset(vector<Node> &nodes, int offset)
{
    for(int i=0; i<(int)nodes.size(); i++)
    {
        nodes[i].setMe(i+offset);
        nodes[i].setParent(i+offset);
        nodes[i].setRank(0);
    }
}   
