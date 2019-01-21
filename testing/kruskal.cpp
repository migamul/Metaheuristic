#include "kruskal.h"

MinimalSpanningTree Kruskal::constructMinimalSpanningTree(vector<Node> &nodes)
{
    DisjointSet djSet(&nodes);
    djSet.reset(nodes);
    vector<Edge> edges = getAllEdgesBeta(nodes);
    vector<Edge> treeEdges;
    treeEdges.reserve(nodes.size()-1);
    unsigned int nbOfTreeEdges = 0;
    for(Edge& edge : edges)
    {
        if(!djSet.sameSet(edge.getA().getMe(), edge.getB().getMe()))
        {
            djSet.Union(edge.getA().getMe(), edge.getB().getMe());
            treeEdges.push_back(edge);
            nbOfTreeEdges++;
            if(nbOfTreeEdges >= nodes.size() - 1) break;
        }
    }
    
    if(nbOfTreeEdges != nodes.size()-1) // in case we failed to create MST from limited number of edges
    {
        djSet.reset(nodes);
        edges = getAllEdges(nodes);
        nbOfTreeEdges = 0;
        treeEdges.clear();
        for(Edge& edge : edges)
        {
                if(!djSet.sameSet(edge.getA().getMe(), edge.getB().getMe()))
            {
                djSet.Union(edge.getA().getMe(), edge.getB().getMe());
                treeEdges.push_back(edge);
                nbOfTreeEdges++;
                if(nbOfTreeEdges >= nodes.size() - 1) break;
            }
        }
    }
    djSet.reset(nodes);
    MinimalSpanningTree mst(nodes, treeEdges);
    return mst;
}

MinimalSpanningTree Kruskal::extendMinimalSpanningTree(MinimalSpanningTree &mst, Node &node)
{
    vector<Node> n;
    n.push_back(node);
    return extendMinimalSpanningTree(mst, n);
}

MinimalSpanningTree Kruskal::extendMinimalSpanningTree(MinimalSpanningTree &mst, vector<Node> &nodes)
{
    vector<Node> newNodes = Merge(mst.getNodes(),nodes);
    DisjointSet djSet(&newNodes);
    djSet.reset(newNodes);
    djSet.reset(nodes, mst.getNodes().size());

    vector<Edge> extra = getExtraMSTEdges(mst,nodes);
    vector<Edge> edges = Merge(mst.getEdges(),extra);
    sort(edges.begin(), edges.end());

    int n = mst.getNodes().size() + nodes.size(); // nb of nodes
    vector<Edge> treeEdges;
    treeEdges.reserve(n-1);
    int i = 0;
    for(Edge& edge : edges)
    {
        if(!djSet.sameSet(edge.getA().getMe(), edge.getB().getMe()))
        {
            djSet.Union(edge.getA().getMe(), edge.getB().getMe());
            treeEdges.push_back(edge);
            i++;
            if(i == n-1) break;
        }
    }
		
    if(i != n-1)    // in case we failed to create MST from limited number of edges
    {
        djSet.reset(newNodes);
        extra = getAllExtraMSTEdges(mst,nodes);
        edges = Merge(mst.getEdges(),extra);
        sort(edges.begin(), edges.end());

        treeEdges.clear();
        i = 0;
        for(Edge& edge : edges)
        {
            if(!djSet.sameSet(edge.getA().getMe(), edge.getB().getMe()))
            {
                djSet.Union(edge.getA().getMe(), edge.getB().getMe());
                treeEdges.push_back(edge);
                i++;
                if(i == n-1) break;
            }
        }

    }

    djSet.reset(newNodes);
    MinimalSpanningTree newMST(newNodes,treeEdges);
    return newMST;
}

vector<Edge> Kruskal::getAllEdges(vector<Node> &nodes)
{
    int n = nodes.size();
    vector<Edge> allEdges;
    
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            allEdges.push_back(Edge(nodes[i],nodes[j]));
    sort(allEdges.begin(), allEdges.end());     // QuickSort
    return allEdges;
}

vector<Edge> Kruskal::getAllEdgesBeta(vector<Node> &nodes)
{
    vector<Edge> edges;
    for(Node& node : nodes)
    {
        UsableEdges lst(node);
        lst.add(nodes);
        for(Edge& edge : lst.getEdges()) edges.push_back(edge);
    }
    sort(edges.begin(), edges.end());           // QuickSort
    return edges;
}

vector<Edge> Kruskal::getExtraMSTEdges(MinimalSpanningTree &mst, vector<Node> &nodes)
{
    vector<Edge> edges;
    for(Node& node : nodes)
    {
        UsableEdges lst(node);
        lst.add(nodes);
        lst.add(mst.getNodes());
        for(Edge& edge : lst.getEdges()) edges.push_back(edge);
    }
    return edges;
}

vector<Edge> Kruskal::getAllExtraMSTEdges(MinimalSpanningTree &mst, vector<Node> &nodes)
{
    vector<Edge> edges;
    for(Node& node : nodes)
    {
        UsableEdges lst(node);
        lst.addAll(nodes);
        lst.addAll(mst.getNodes());
        for(Edge& edge : lst.getEdges()) edges.push_back(edge);
    }
    return edges;
}

