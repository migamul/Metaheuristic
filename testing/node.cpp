#include "node.h"

Node& Node::operator=(const Node & n)   // copy assignment operator
{
    x = n.x;
    y = n.y;
    me = n.me;
    parent = n.parent;
    rang = n.rang;
    return *this;
}

Node& Node::operator=(Node && n)    // move assignment operator
{
    x = n.x;
    y = n.y;
    me = n.me;
    parent = n.parent;
    rang = n.rang;
    return *this;
}

bool operator==(const Node& n1, const Node& n2)
{
    if(n1.getX() != n2.getX()) return false;
    if(n1.getY() != n2.getY()) return false;
    return true;
}
