#include "particle.h"

Particle& Particle::operator=(const Particle & p)           // copy assignment operator
{
    px = p.px;
    py = p.py;
    vx = p.vx;
    vy = p.vy;
    return *this;
}

Particle& Particle::operator=(Particle && p) noexcept       // move assignment operator
{
    px = p.px;
    py = p.py;
    vx = p.vx;
    vy = p.vy;
    return *this;
}

void Particle::updateVelocity(double w, double x,double y)
{
    vx = w*vx + x;
    vy = w*vy + y;
}

void Particle::fly()
{
    px += vx;
    py += vy;
}
