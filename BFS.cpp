#include<bits/stdc++.h>
using namespace std;
void BFS(vector<int> adj[],int V,int s )
{
    bool visited[V] ;
    for(int i = 0 ; i < V ; i++)
    {
        visited[i] = false ;
    }
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
             
void addEdge(vector<int> adj[],int u ,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v) {
		cout << "\n Adjacency list of vertex " << v
			<< "\n head ";
		for (auto x : adj[v])
			cout << "-> " << x;
		printf("\n");
	}
}
int main()
{
    int U = 5 ;
    vector<int> adj[U];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    addEdge(adj,3,4);
    printGraph(adj,U);
    cout<<endl<<endl;
     BFS(adj, U , 0 );
    return 0;

  

}