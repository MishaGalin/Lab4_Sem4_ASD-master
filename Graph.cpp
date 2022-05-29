#include "Graph.h"


Graph::Graph(int N, string fName) : N(N)
{
	f.open(fName);
	f << "window.prog=`\n";
	visited.resize(N, false);
	edgesFrom.resize(N);
	lenght.resize(N);
}

Edge& Graph::AddEdge(int from, int to, int w) {
	Edge* e = new Edge();
	e->a = from;
	e->b = to;
	e->w = w;
	edges.push_back(e);
	edgesFrom[from].push_back(e);
	edgesFrom[to].push_back(e);

	return *e;
}

void Graph::SaveGraph() {
	for (int i = 0; i < N; i++) { // �������
		f << i << endl;
	}

	for (Edge* r : edges) { // �����
		f << *r << ",label=" << r->w << endl;
	}

	f << "draw\n";
}

int Graph::BFS(int start, int end)
{
	queue<Vertex> q;
	map<int, int> from;
	
	Vertex go{ 0,start };
	q.push(go);
	while (!q.empty()) {
		int currentVertex = q.front().number; // �������, �� ������� ��������������� ��� �������� ������� � ������ ������
		q.pop();

		if (visited[currentVertex])
			continue;
		
		f << currentVertex << ",color=lime\n";

		for (Edge* r : edgesFrom[currentVertex]) { // �������� �� ���� ��������, ��������� �� ������
			int v = r->other(currentVertex); // v - �������, ������� ��������� ������ r

			if (visited[v]) {
				f << "p,������� " << v << " ��� ��������\n";
				f << *r << ",color=red\n";
				f << "w,1000\n";
				continue;
			}

			else {
				if (lenght[v] != 0 && lenght[v] < lenght[currentVertex] + r->w)
					continue;

				lenght[v] = lenght[currentVertex] + r->w; // ���������� ���� = ���������� ���� �� ���������� ������� + ����� �����
				Vertex go{ lenght[v],v };
				q.push(go); // ��������� ��� ������� � �������
				from[v] = currentVertex;
				f << "p,������� " << v << " ��� �� ��������\n";
				f << *r << ",color=lime\n";
				f << v << ",color=blue\n";
				f << "w,1000\n";
				f << v << ",shape=box,color=yellow,label=" << v << ";dist: " << lenght[v] << "\n";
				f << *r << ",color=red\n";
			}
		}

		visited[currentVertex] = true;
		f << "p,��� ����� �� ������� " << currentVertex << " �����������\n";
		f << currentVertex << ",color=green\n";
		f << "w,1000\n";
	}

	int currentVertex = end;
	while (currentVertex != start) {
		for (Edge* r : edgesFrom[currentVertex]) {
			if (r->other(currentVertex) == from[currentVertex]) {
				f << *r << ",color=blue\n";
				f << "w,1000\n";
				currentVertex = from[currentVertex];
			}
		}
	}

	f << "p,����������� ���� �� ������� " << end << " �� ������� " << start << ": " << lenght[end] << endl;
	return lenght[end];
}

Graph::~Graph() {
	f << "`";
	f.close();

	for (int i = 0; i < edges.size(); i++) {
		delete edges[i];
	}
}