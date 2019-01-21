#ifndef PARTICLE_H_INCLUDED
#define PARTICLE_H_INCLUDED

using namespace std;

// Class representing a particle in a swarm.
// A particle has a location and a velocity.

class Particle
{
public:
	double px;
	double py;
	double vx;
	double vy;

public:
	Particle(double x,double y) : px(x), py(y), vx(0), vy(0) {}                     // constructor

    Particle(const Particle & p) : px(p.px), py(p.py), vx(p.vx), vy(p.vy) {}        // copy constructor
    Particle(Particle && p) noexcept : px(p.px), py(p.py), vx(p.vx), vy(p.vy) {}    // move constructor

    Particle& operator=(const Particle & p);                                        // copy assignment operator
    Particle& operator=(Particle && p) noexcept;                                    // move assignment operator

	double getX() const { return px; }
	double getY() const { return py; }

    // Updates the velocity of the particle.
    // parameter w is the relative weight of the old velocity in the new velocity.
	void updateVelocity(double w, double x,double y);

    // Moves the position of the particle 1 unit of the velocity.
	void fly();
};

#endif // PARTICLE_H_INCLUDED
