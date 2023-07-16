#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{ 
    map<T,list<T> > l;      // vector<int> adj[]. // map with name l .     adjacency list ....
    public:
    void addedge(int x,int y)
    {    // edges are bidirectional.
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void dfshelper(T src,map<T,bool> &visited)
    {
        // recursive function that will traverse the graph..
        cout<<src<<" ";
         // go to all neighbours of that node is not visited . 
        visited[src]=true;
         for(T i:l[src])
         {  
            if(!visited[i])
            {
                dfshelper(i,visited);  // har connected node ke liye dfs call .  
            }
         }
        // dfs(0) 
    }

    void dfs(T src)
    {
        map<T,bool> visited;
// mark alll nodes not visited in the beginning . 
        for(auto p:l)
        {
            T node=p.first;
            visited[node]=false;
        }
    dfshelper(src,visited);

    }

}


int main()
{

Graph<int> g;
// to add edges between two nodes(vertices).
g.addedge(0,1);
g.addedge(1,2);
g.addedge(2,3);
g.addedge(3,4);
g.addedge(4,5);
g.addedge(3,0);

g.dfs(0);           // source node is zero . 

}