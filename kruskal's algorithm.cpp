#include <iostream>
#include <algorithm>
using namespace std;

// kruskal's algorithm

class Edge
{
  public:

  // define source, destination and weight
  int source;
  int dest;
  int weight;
};

// comparing weight of two edges
bool compare(Edge e1, Edge e2)
{
  return e1.weight < e2.weight;
}

// checking the parent of vertex
int findParent(int vertex, int *parent)
{
  // if vertex is at first place, return vertex
  if(parent[vertex] == vertex)
  {
    return vertex;
  }
  // calling recursion
  return findParent(parent[vertex], parent);
}

void kruskals(Edge *input, int vertex, int edges)
{
  // sort the input array - ascending order based on weights
  sort(input, input + edges, compare);

  Edge *output = new Edge[vertex - 1]; // (vertex - 1) is taken to follow spanning tree rule
  int *parent = new  int[vertex]; // to know the parent of vertex

  for(int i = 0; i < vertex; i++)
  {
    parent[i] = i;
  }
  int count = 0;
  int i = 0;

  while(count != vertex - 1)
  {
    // initialising currentEdge with first index
    Edge currentEdge = input[i];

    // check if we can add the currentEdge in MST or not
    int sourceParent = findParent(currentEdge.source, parent);
    int destParent = findParent(currentEdge.dest, parent);

    if(sourceParent != destParent)
    {
      output[count] = currentEdge;
      count++;
      parent[sourceParent] = destParent;
    }
    i++;
  }

  // print the output of eligible weight
  for(int i = 0; i < vertex - 1; i++)
  {
    if(output[i].source < output[i].dest)
    {
      cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
    }
    else
    {
      cout<<output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;
    }
  }
}

int main() {
  int vertex, edges;
  cout<<"enter the number of vertex"<<endl;
  cin>>vertex;
  cout<<"enter the number of edges"<<endl;
  cin>>edges;

  Edge *input = new Edge[edges];

  for(int i = 0; i < edges; i++)
  {
    int s, d, w;
    cout<<"enter source, destination and weight"<<endl; 
    cin>>s>>d>>w;
    input[i].source = s;
    input[i].dest = d;
    input[i].weight = w;
  }

  kruskals(input, vertex, edges);
}
