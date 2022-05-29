#include <iostream>
#include "Graph.h"
#include <thread>
using namespace std;

int main()
{
	Graph g(8, "../../../vis/commands.js");
	g.AddEdge(0, 1, 1);
	g.AddEdge(1, 3, 1);
	g.AddEdge(4, 3, 1);
	g.AddEdge(2, 6, 1);
	g.AddEdge(0, 5, 1);
	g.AddEdge(1, 6, 1);
	g.AddEdge(4, 7, 1);
	g.AddEdge(4, 0, 1);

	g.SaveGraph();
	cout << g.BFS(2,5) << endl;
	return 0;
}