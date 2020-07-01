#include <iostream>
using namespace std;

void DFS(int **edges, int vertex, int start, bool *visited)
{
  cout<<start<<" ";
  visited[start] = true;
  for(int i = 0; i < vertex; i++)
  {
    if(edges[start][i] == 1 && !visited[i])
    {
      DFS(edges, vertex, i, visited);
    }
  } 
}

void addEdge(int **edges, int u, int v)
{
  edges[u][v] = 1;
  edges[v][u] = 1;
}

int main() {

  int vertex, edge;
  cout<<"enter number of vertex"<<endl;
  cin>> vertex;

  int **edges = new int *[vertex];
  for(int i = 0; i < vertex; i++)
  {
    edges[i] = new int[vertex];
    for(int j = 0; j < vertex; j++)
    {
      edges[i][j] = 0;
    }
  }

  cout<<"enter number of edges"<<endl;
  cin>>edge;

  int u, v;
  for(int i = 0; i < edge; i++)
  {
    cout<<"enter the edge of first vertex"<<endl;
    cin>>u;
    cout<<"enter the edge of second vertex"<<endl;
    cin>>v;
    addEdge(edges,u,v);
  }

  bool *visited = new bool[vertex];
  for(int i = 0; i < vertex; i++)
  {
    visited[i] = false;
  }

  DFS(edges, vertex, 0, visited);
}
