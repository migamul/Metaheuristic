#ifndef MULTISWARM_H_INCLUDED
#define MULTISWARM_H_INCLUDED

#include "swarm.h"
#include "kruskal.h"
#include "steinerTree.h"
#include <list>
#include <iterator>
#include <ctime>

/// This class solves a Steiner Tree Problem using Multi Swarm Optimisation.

class MultiSwarm
{
private:
    // The basic minimal spanning tree of the given points, without any steiner points.
    MinimalSpanningTree basic;

    // The current best solution.
	MinimalSpanningTree best;

	// The maximum amount of steiner points to add.
	int maks;

    // The swarm size of each swarm per steiner point.
	int swarmsize;

	// The relative weight of an old particle velocity in a new particle velocity.
	double w1;

    // The relative weight of the distance between a particle and the current
    // best position for that particle in the new particle velocity.
	double w2;

	// The list of swarms.
	list<Swarm> swarms;

    // Initial positions of particles are random numbers from [min_X,max_X]*[min_Y,max_Y]
    double min_X, max_X;
    double min_Y, max_Y;

    std::default_random_engine r_engine;

public:
	// Constructor for executing multi swarm optimization for a limited amount of steiner nodes.
    MultiSwarm(vector<Node> &nodes, int _maks, int _swarmsize, double _w1, double _w2);  // constructor

    // Evolves the swarm for the given amount of cycles.
	void evolve(int amount);

	// Evolves the swarms 1 cycle
	void evolve();

	SteinerTree getSteinerTree();

    vector< vector<Particle> > getParticles();
private:
    void tryNewSwarm();

	void fly();

	void updateParticle(Particle& p, Node& node);

	vector<Node> getOtherSteinerNodes(Node& node);

	vector<Node> getSteinerNodes();

	vector<Particle> generateParticles();
};

#endif // MULTISWARM_H_INCLUDED
