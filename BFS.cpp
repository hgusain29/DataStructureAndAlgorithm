#include<bits/stdc++.h>
using namespace std;
void BFS(vector<int> adj[],int s ,bool visited[] )
{
    
    queue<int> q ;
    visited[s] = true ;
    q.push(s) ;
    while(q.empty() == false)
    {
          int u = q.front();
          q.pop();
          cout<<u<<" " ;
          for(int v : adj[u])
          {
            if(visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
          }
    }
}
void iterate(vector<int>adj[],int V  )
{
    bool visited[V] ;
    for(int i = 0 ; i < V ; i++)
    {
        visited[i] = false ;
    }
    for(int i = 0 ; i < V ; i++)
    {
        if(visited[i]==false)
        {
            BFS(adj,i,visited) ;
        }
        cout<<endl;
    }
}
             
void addEdge(vector<int> adj[],int u ,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int U = 8 ;
    vector<int> adj[U];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    addEdge(adj,3,4);
    addEdge(adj,5,6);
    addEdge(adj,5,7);
    addEdge(adj,6,7);
    cout << "Following is Breadth First Traversal: "<< endl; 
     iterate(adj, U );

    return 0;

  

}