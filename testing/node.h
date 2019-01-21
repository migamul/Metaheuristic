#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

// Using C++11 language standard.
// Function to_string may cause problems on some compilers.

#include <string>

using namespace std;

// This class represents a point in Euclidean space and adds
// functionality to be used in a disjoint-set data structure.
// http://en.wikipedia.org/wiki/Disjoint-set_data_structure

class Node
{
private:
    double x,y;
    int me, parent;
	int rang;

public:
	Node() : x(0), y(0), rang(0) {}                               // default constructor
	Node(double _x, double _y) : x(_x), y(_y), rang(0) {}         // constructor from x,y

    Node(const Node & n) : x(n.x), y(n.y), me(n.me), parent(n.parent), rang(n.rang) {}      // copy constructor
    Node(Node && n) : x(n.x), y(n.y), me(n.me), parent(n.parent), rang(n.rang) {}           // move constructor

    Node& operator=(const Node & n);                              // copy assignment operator
    Node& operator=(Node && n);                                   // move assignment operator

    double getX() const { return x; }
    void setX(double _x) { x = _x; }

    double getY() const { return y; }
    void setY(double _y) { y = _y; }

    int getMe() const { return me; }
    void setMe(int _me) { me = _me; }

    int getParent() const { return parent; }
    void setParent(int _parent) { parent = _parent; }

    int getRank() const { return x; }
    void setRank(int _rang) { rang = _rang; }
    void increaseRank() { rang++; }

    friend bool operator==(const Node& n1, const Node& n2);

//    string toString() { return "x: " + to_string(x) + " y: " + to_string(y) ; }
};

#endif // NODE_H_INCLUDED
