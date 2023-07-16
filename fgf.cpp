




void bfs(T src)
{
     map<T,int> dist;
     
queue<int> q;
int vis[n]={0};
q.push(0);  // pushed the starting node . .  
vis[0]=1;

while(!q.empty())
{
int node =q.front();
q.pop();
cout<<node<<" ";
for(auto it:adj[node])
{

    if(!vis[it])
{
    vis[it]=1;
    q.push(it);
}

}



}

}   