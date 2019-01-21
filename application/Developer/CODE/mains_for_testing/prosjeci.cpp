// Using C++11 language standard.
// Function to_string may cause problems on some compilers.

#include "MSTheuristic.h"
#include "multiswarm.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/// Sluzi za testiranje prosjeka svih instanci za svaki pojedini par n i k.
int main()
{
    const int evolutions = 50;                 /// BROJ EVOLUCIJA
    const int swarm_size = 500;                /// VELICINA SWARMA
    const double w1 = 0.95;                       /// PARAMETAR W1
    const double w2 = 0.25;                       /// PARAMETAR W2
    ofstream out("txt/results.txt");

    vector<int> nSIZE;
    for(int i=10; i<=100; i+=10) nSIZE.push_back(i);
    nSIZE.push_back(250);
    nSIZE.push_back(500);
    nSIZE.push_back(1000);
    nSIZE.push_back(10000);

    vector<int> k_from;
    k_from.push_back(5);
    k_from.push_back(10);
    k_from.push_back(20);
    k_from.push_back(50);

    for(int pom : nSIZE)
    {
        ifstream in;
        string s = "estein/estein" + to_string(pom) + ".txt";
        out << s << endl;
        in.open(s);
        int problems;
        in >> problems;
        vector<vector<Node> > allNodes;

        for(int i=0; i<problems; i++)
        {
            int n;
            in >> n;
            vector<Node> nodes;
            for(int j=0; j<n; j++)
            {
                double x,y;
                in >> x >> y;
                Node node(x,y);
                nodes.push_back(node);
            }
            allNodes.push_back(nodes);
        }

        for(int k : k_from)
        {
            out << "k = " << k << endl;
            double avg1=0, avg2=0;
            for(int i=0; i<problems; i++)
            {
                MinimalSpanningTree mst = Kruskall::constructMinimalSpanningTree(allNodes[i]);
                double mstBottleneck = mst.getBottleneck();

                SteinerTree st1 = MSTheuristic::getSteinerTree(allNodes[i],k);
                double bottleneck1 = st1.getBottleneck().getLength();
                avg1 += 100*bottleneck1/mstBottleneck;

                MultiSwarm multiswarm(allNodes[i], k, swarm_size, w1, w2);
                multiswarm.evolve(evolutions);
                SteinerTree st2 = multiswarm.getSteinerTree();
                double bottleneck2 = st2.getBottleneck().getLength();
                avg2 += 100*bottleneck2/mstBottleneck;
            }
            avg1 /= problems;
            avg2 /= problems;
           out << "MSTheuristic(%) = " << avg1<< " multiswarm(%) = " << avg2 << endl;
       }

        in.close();
    }

    return 0;
}

