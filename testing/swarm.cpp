#include "swarm.h"

Swarm& Swarm::operator=(const Swarm & s)        // copy assignment operator
{
    particles = s.particles;
    node = s.node;
    return *this;
}

Swarm& Swarm::operator=(Swarm && s) noexcept    // move assignment operator
{
    particles = move(s.particles);
    node = move(s.node);
    return *this;
}
