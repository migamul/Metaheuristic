// Using C++11 language standard.

#include "MSTheuristic.h"
#include "multiswarm.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    const int evolutions = 50;      /// NUMBER OF EVOLUTIONS
    const int swarm_size = 500;     /// NUMBER OF PARTICLES IN A SWARM
    const double w1 = 0.95;         /// PARAMETER W1
    const double w2 = 0.25;         /// PARAMETER W2

    ifstream info("txt/info.txt");
    ofstream fNodes("txt/nodes.txt");
    ofstream fSteinerPoints("txt/steinerPoints.txt");
    ofstream fEdges("txt/edges.txt");
    if( info.is_open()==0 || fNodes.is_open()==0 || fSteinerPoints.is_open()==0 || fEdges.is_open()==0 ) return 0;

    string s;
    info >> s;
    ifstream read_nodes(s);
    if( read_nodes.is_open() == 0 )
    {
        fSteinerPoints << "Unable to open the file containing nodes.\n";
        fEdges << "Unable to open the file containing nodes.\n";
        return -1;
    }
    
    int k;
    info >> k;
    if(k <= 0)
    {
        fSteinerPoints << "Invalid k. Expected k >= 1\n";
        fEdges << "Invalid k. Expected k >= 1\n";
        return -2;
    }

    int repeat;
    info >> repeat;
    if(repeat < 0)
    {
        fSteinerPoints << "Invalid number of times to run multiswarm heuristic. Expected repeat >= 0\n";
        fEdges << "Invalid number of times to run multiswarm heuristic. Expected repeat >= 0\n";
        return -3;
    }
    
    char ch;
    while(!read_nodes.eof())    // copying nodes into a designated file
    {
        read_nodes.get(ch);
        fNodes << ch;
    }
    read_nodes.close();
    
    read_nodes.open(s);
    if( read_nodes.is_open() == 0 )
    {
        fSteinerPoints << "Unable to open the file containing nodes.\n";
        fEdges << "Unable to open the file containing nodes.\n";
        return -4;
    }
    
    int n;
    read_nodes >> n;

    vector<Node> nodes;
    for(int i=0; i<n; i++)
    {
        double x,y;
        read_nodes >> x >> y;
        nodes.push_back(Node(x,y));
    }


/// MST HEURISTIC
    SteinerTree st = MSTheuristic::getSteinerTree(nodes,k);
    double bottleneck = st.getBottleneck().getLength();

    
/// MULTISWARM HEURISTIC
    for(int i=0; i<repeat; i++)
    {
        MultiSwarm multiswarm(nodes, k, swarm_size, w1, w2);
        multiswarm.evolve(evolutions);
        SteinerTree stTemp = multiswarm.getSteinerTree();
        double bottleneckTemp = stTemp.getBottleneck().getLength();
        if (bottleneckTemp < bottleneck)
        {
            st = stTemp;
            bottleneck = bottleneckTemp;
        }
    }

// output
    fSteinerPoints << k << endl;
    for(Node& point : st.getSteinerPoints())
        fSteinerPoints << fixed << setprecision(7) << point.getX() << " " << fixed << setprecision(7) << point.getY() << endl;
    for(Edge& edge : st.getEdges())
        fEdges << fixed << setprecision(7) << edge.getA().getX() << " " << fixed << setprecision(7) << edge.getA().getY() << " "
               << fixed << setprecision(7) << edge.getB().getX() << " " << fixed << setprecision(7) << edge.getB().getY() << endl;

    return 0;
}


