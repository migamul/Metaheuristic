// Using C++11 language standard.
// Function to_string may cause problems on some compilers.

#include "MSTheuristic.h"
#include "multiswarm.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/// Sluzi za racunanje rezultata jedne instance i crtanje rjesenja.
int main()
{
    const int k = 50;                           /// BROJ STEINEROVIH TOCAKA
    const int evolutions = 50;                  /// BROJ EVOLUCIJA
    const int swarm_size = 500;                 /// VELICINA SWARMA
    const double w1 = 0.95;                        /// PARAMETAR W1
    const double w2 = 0.25;                        /// PARAMETAR W2
    ifstream in("instances/stp20/stp20a");      /// IME PRIMJERA
    ofstream out("txt/results.txt");
    ofstream steinerPoints("txt/steinerPoints.txt");
    ofstream edges("txt/edges.txt");

    if( steinerPoints.is_open() && edges.is_open() && out.is_open() && in.is_open() )
    {

    int n;
    in >> n;
    vector<Node> nodes;
    for(int j=0; j<n; j++)
    {
        double x,y;
        in >> x >> y;
        nodes.push_back(Node(x,y));
    }

/// Treba zakomentirati 2/3 sljedeca ispisa da ne bi bilo kolizija

/// MINIMAL SPANNING TREE
    MinimalSpanningTree mst = Kruskall::constructMinimalSpanningTree(nodes);
    double mstBottleneck = mst.getBottleneck();

    // za crtanje
//    steinerPoints << k << endl;
//    for(Node& point : nodes2)
//        steinerPoints << fixed<<setprecision(7)<<point.getX()<< " " << fixed<<setprecision(7)<<point.getY() << endl;
//    for(Edge& edge : mst.getEdges())
//        edges << fixed << setprecision(7) << edge.getA().getX() << " " << fixed << setprecision(7) << edge.getA().getY() << " "
//              << fixed << setprecision(7) << edge.getB().getX() << " " << fixed << setprecision(7) << edge.getB().getY() << endl;


/// MST HEURISTIC
    SteinerTree st1 = MSTheuristic::getSteinerTree(nodes,k);
    double bottleneck1 = st1.getBottleneck().getLength();
    double avg1 = 100*bottleneck1/mstBottleneck;

    // za crtanje
//    steinerPoints << k << endl;
//    for(Node& point : st1.getSteinerPoints())
//        steinerPoints << fixed << setprecision(7) << point.getX() << " " << fixed << setprecision(7) << point.getY() << endl;
//    for(Edge& edge : st1.getEdges())
//        edges << fixed << setprecision(7) << edge.getA().getX() << " " << fixed << setprecision(7) << edge.getA().getY() << " "
//              << fixed << setprecision(7) << edge.getB().getX() << " " << fixed << setprecision(7) << edge.getB().getY() << endl;


/// MULTISWARM HEURISTIC
   MultiSwarm multiswarm(nodes, k, swarm_size, w1, w2);
    multiswarm.evolve(evolutions);
    SteinerTree st2 = multiswarm.getSteinerTree();
    double bottleneck2 = st2.getBottleneck().getLength();
    double avg2 = 100*bottleneck2/mstBottleneck;

    // za crtanje
    steinerPoints << k << endl;
    for(Node& point : st2.getSteinerPoints())
        steinerPoints << fixed << setprecision(7) << point.getX() << " " << fixed << setprecision(7) << point.getY() << endl;
    for(Edge& edge : st2.getEdges())
        edges << fixed << setprecision(7) << edge.getA().getX() << " " << fixed << setprecision(7) << edge.getA().getY() << " "
              << fixed << setprecision(7) << edge.getB().getX() << " " << fixed << setprecision(7) << edge.getB().getY() << endl;

    // rezultati
    out << "k = " << k << endl;
    out << "MSTheuristic(%) = " << avg1 << " multiswarm(%) = " << avg2 << endl;

    }
    in.close();
    out.close();
    steinerPoints.close();
    edges.close();
    return 0;
}
