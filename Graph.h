#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <queue>
#include <tuple>
#include <map>
using namespace std;

// вершины - по номерам 0 .. N-1
// ребра - объекты Edge

struct Edge {
public:
	int a, b; // соединяет вершины под номерами a и b
	int w;
	int other(int x) {
		if (x == a) return b;
		if (x == b) return a;
		//throw "Wrong argument";
	}
};

struct Vertex {
public:
	int lenght, number;
	bool operator < (const Vertex& other) const {
		return lenght > other.lenght;
	}
};

static ostream& operator<<(ostream& o, const Edge& e) {
	if (e.a < e.b) o << e.a << "-" << e.b;
	else o << e.b << "-" << e.a;

	return o;
}

class Graph {
public:
	int N;
	ofstream f;

	vector<Edge*> edges; // тут ребра хранятся
	vector<vector<Edge*>> edgesFrom; // ребра из каждой вершины
	vector<int> lenght; // длины путей до каждой вершины из выбранной
	vector<bool> visited;

	Graph(int N, string fName);

	Edge& AddEdge(int from, int to, int w = 1);

	void SaveGraph();

	int BFS(int, int);

	~Graph();
};