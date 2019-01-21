#include "edge.h"

Edge& Edge::operator=(const Edge & e)           // copy assignment operator
{
    A = e.A;
    B = e.B;
    return *this;
}
    
Edge& Edge::operator=(Edge && e) noexcept       // move assignment operator
{
    A = move(e.A);
    B = move(e.B);
    return *this;
}
    
double Edge::getSquaredLength() const
{
    double _x = A.getX()-B.getX();
    double _y = A.getY()-B.getY();
    return (_x*_x) + (_y*_y);
}

bool operator<(const Edge& e1, const Edge& e2)
{
    return e1.getSquaredLength() < e2.getSquaredLength();
}
