#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int> adj[] ,bool visited[],int i)
{
    visited[i] = true;
    cout<<i<<" ";
    for(int v : adj[i])
    {
        if(visited[v]==false)
        {
            DFS(adj,visited,v);
        } 
        
    }
} 
void DFSiterate(vector<int> adj[],int V)
{
    int c;
    bool visited[V];
    for(int i = 0 ; i < V ; i++)
    {
        visited[i] = false;
    }
    for(int i = 0 ; i < V ; i++)
    {
        if(visited[i]==false)
        {
            DFS(adj,visited,i);
            cout<<endl;
        }
    }
}

void addEdge(vector<int> adj[],int u ,int v)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
}

int main()
{
int V=8;
	vector<int> adj[V];
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
	cout << "Following is Depth First Traversal: "<< endl; 
    DFSiterate(adj,V);
	
  
return 0;
}