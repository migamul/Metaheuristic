#include "line.h"

Line& Line::operator=(const Line & l)                 // copy assignment operator
{
    A = l.A;
    B = l.B;
    steinerpoints = l.steinerpoints;
    return *this;
}

Line& Line::operator=(Line && l) noexcept             // move assignment operator
{
    A = move(l.A);
    B = move(l.B);
    steinerpoints = l.steinerpoints;
    return *this;
}

double Line::getSquaredLength() const
{
    double _x = A.getX()-B.getX(),
           _y = A.getY()-B.getY();
    int c = steinerpoints + 1;
    return ((_x*_x) + (_y*_y)) / (c*c);
}       
