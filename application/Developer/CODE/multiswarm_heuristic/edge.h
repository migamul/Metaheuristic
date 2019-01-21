#ifndef EDGE_H_INCLUDED
#define EDGE_H_INCLUDED

// Using C++11 language standard.
// Function to_string may cause problems on some compilers.

#include "node.h"
#include <cmath>

/// This class represents an edge in the 2-dimensional Euclidean space.

class Edge
{
protected:
    Node A,B;

public:
    Edge(Node& _A, Node& _B) : A(_A), B(_B) {}

    Edge(const Edge & e) : A(e.A), B(e.B) {}                    // copy constructor
    Edge(Edge && e) noexcept : A(move(e.A)), B(move(e.B)) {}    // move constructor

    Edge& operator=(const Edge & e);                            // copy assignment operator
    Edge& operator=(Edge && e) noexcept;                        // move assignment operator


    Node& getA() { return A; }
    Node& getB() { return B; }

	virtual double getSquaredLength() const;

	double getLength() const { return sqrt(getSquaredLength()); }

//    string toString() { return A.toString() + " ---> " + B.toString() + " length: " + to_string(getLength()); }

    friend bool operator<(const Edge& e1, const Edge& e2);                  // used in std::sort
};

#endif // EDGE_H_INCLUDED
