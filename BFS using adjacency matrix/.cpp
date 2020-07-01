#include <iostream>
#include <vector>
using namespace std;

class Graph
{
  int vertex; // number of vertex
  int edge; // numner of edge
  int **adj; // adjacency matrix
  public:

  // to create the initial adjacency matrix
  Graph(int vertex, int edge)
  {
    
    this -> vertex = vertex;
    this -> edge = edge;
    adj = new int*[vertex];

    for(int row = 0; row < vertex; row++)
    {
      adj[row] = new int[vertex];
      for(int column = 0; column < vertex; column++)
      {
        adj[row][column] = 0;
      }
    }
  }

  // function to add an edge to the graph
  void addEdge(int edge1, int edge2)
  {
    adj[edge1][edge2] = 1;
    adj[edge2][edge1] = 1;
  }

  // function to perform BFS on graph
  void BFS(int start)
  {
    vector<bool> visited(vertex, false);
    vector<int> q;

    q.push_back(start);

    // set start as true
    visited[start] = true;

    int visit;
    while(!q.empty())
    {
      visit = q[0];

      cout<<visit<<" ";
      q.erase(q.begin());

      for(int i = 0; i < vertex; i++)
      {
        if(adj[visit][i] == 1 && (!visited[i]))
        {
          q.push_back(i);
          visited[i] = true;
        }
      }
    }
  }
};

int main()
{
  int vertex, edge;
  cout<<"enter the number of vertex"<<endl;
  cin>>vertex;
  cout<<"enter the number of edges"<<endl;
  cin>>edge;

  Graph G(vertex, edge);

  for(int i = 0; i < edge; i++)
  {
    int edge1, edge2;
    cout<<"enter the first edge"<<endl;
    cin>>edge1;
    cout<<"enter the second edge"<<endl;
    cin>>edge2;

    G.addEdge(edge1, edge2);
  }

  G.BFS(0);
}
