#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED

#include "edge.h"

class Line : public Edge
{
private:
    int steinerpoints;
    
public:
    Line(Node& A, Node& B) : Edge(A,B), steinerpoints(0) {}

    Line(const Line& l) : Edge(l), steinerpoints(l.steinerpoints) {}                // copy constructor
    Line(Line && l) noexcept : Edge(move(l)), steinerpoints(l.steinerpoints) {}     // move constructor
    
    Line& operator=(const Line & l);                // copy assignment operator
    Line& operator=(Line && l) noexcept;            // move assignment operator
    
	int getSteinerpoints() const { return steinerpoints; }

    void addSteinerpoint() { steinerpoints++; }
	    		
	double getSquaredLength() const;
};

#endif // LINE_H_INCLUDED
