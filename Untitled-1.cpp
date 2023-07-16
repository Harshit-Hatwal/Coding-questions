#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void dfs(int node,vector<int> adj[],int vis[],vector<int> &ans)
{
    vis[node]=1;   // making the node visited 
    ans.push_back(node);   // storing in the ans .
    // traversing the neighbours of the node .
    for(auto it: adj[node])
    {
        if(!vis[it])
        dfs(it,adj,vis,ls);

    }


        // dfs(1)    1 is pushed   dfs(2)   2 is pushed into the ans      dfs(5)  5  is pushed into ans 5 ki adjacency list  mein  2 is visited so it will not visit again
        // and    now in 2 ki adjacency list mein 6 is not visited so 6 is pushed into the code .       now  1 ki adjacency list mein 3 is moved  

}

int main()
{
       
    vector<int> dfsofgraph(int v,vector<int> adj[])
    {
            //     making adjacency list.     depending on whether the nodes are 1 based or zero basedd .
            int vis[v]={0};
            int start=0; // starting node .   
            vector<int> ans;//  to store the dfs traversal . 
            dfs(start,adj,vis,ans);

            return dfs;
    }



        }





}