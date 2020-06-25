#include <iostream>
#include <list>
using namespace std;

class Graph
{
  int V;
  list<int> *adj;

  public:
  Graph(int V)
  {
    this -> V = V;
    adj = new list<int>[V];
  }

  void addEdge(int v, int w)
  {
    adj[v].push_back(w);
  }

  void  BFS(int s)
  {
    // mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
    {
      visited[i] = false;
    }

    // create a queue for BFS
    list<int> queue;

    // mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // 'i' will be used to get all adjacent vertices of a vertex
    list <int> :: iterator i;

    while(!queue.empty())
    {
      // dequeue a vertex from queue and print it
      s = queue.front();
      cout<<s<<" ";
      queue.pop_front();

      /*get all adjacent vertices of the dequeued vertex s
      if a adjacent has not been visited, then mark it visited and enqueue it*/
      for(i = adj[s].begin(); i != adj[s].end(); ++i)
      {
        if(!visited[*i])
        {
          visited[*i] = true;
          queue.push_back(*i);
        }
      }
    }
  }
};

int main() {
  Graph g(4);
  g.addEdge(0,1);
  g.addEdge(0,2);
  g.addEdge(1,2);
  g.addEdge(2,0);
  g.addEdge(2,3);
  g.addEdge(3,3);

  cout<<"following is breadth first traversal "<<" (starting from vertex 2)\n";
  g.BFS(0);

}
