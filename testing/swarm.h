#ifndef SWARM_H_INCLUDED
#define SWARM_H_INCLUDED

#include "particle.h"
#include "node.h"
#include <vector>

// Represents a swarm for a steiner point.
class Swarm
{
private:
    vector<Particle> particles;
    Node node;

public:
    Swarm(vector<Particle> &_particles, Node _node) : particles(_particles), node(_node) {}     // constructor

    Swarm(const Swarm & s) : particles(s.particles), node(s.node) {}                            // copy constructor
    Swarm(Swarm && s) noexcept : particles(move(s.particles)), node(move(s.node)) {}            // move constructor

    Swarm& operator=(const Swarm & s);                                                          // copy assignment operator
    Swarm& operator=(Swarm && s) noexcept;                                                      // move assignment operator

    Node getNode() const { return node; }
	void setNode(Node& _node) { node = _node; }

	vector<Particle>& getParticles() { return particles; }
	Node& getNode() { return node; }

};

#endif // SWARM_H_INCLUDED
