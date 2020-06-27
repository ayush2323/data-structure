#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int>adj[], int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void print(vector<int>adj[], int V)
{
  for(int i = 0; i < V; i++)
  {
    cout<<"\nadjacency list of vertex "<<i<<"\n head ";
    for(auto x : adj[i])
    {
      cout<<"->"<<x;
    }
    cout<<endl;
  }
}

int main()
{

  int V,edge,u,v;
  cout<<"enter number of vertex"<<endl;
  cin>>V;
  vector<int>adj[V];
  cout<<"enter number of edges"<<endl;
  cin>>edge;

  for(int i = 0; i < edge; i++)
  {
    cout<<"enter edge of first vertex"<<endl;
    cin>>u;
    cout<<"enter edge of second vertex"<<endl;
    cin>>v;
    addEdge(adj,u,v);
  }

  print(adj, V);
}
