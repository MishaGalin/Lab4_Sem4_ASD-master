window.prog=`
0
1
2
3
4
5
6
7
0-1,label=1
1-3,label=1
3-4,label=1
2-6,label=1
0-5,label=1
1-6,label=1
4-7,label=1
0-4,label=1
draw
2,color=lime
p,вершина 6 еще не посещена
2-6,color=lime
6,color=blue
w,1000
6,shape=box,color=yellow,label=6;dist: 1
2-6,color=red
p,Все ребра из вершины 2 просмотрены
2,color=green
w,1000
6,color=lime
p,вершина 2 уже посещена
2-6,color=red
w,1000
p,вершина 1 еще не посещена
1-6,color=lime
1,color=blue
w,1000
1,shape=box,color=yellow,label=1;dist: 2
1-6,color=red
p,Все ребра из вершины 6 просмотрены
6,color=green
w,1000
1,color=lime
p,вершина 0 еще не посещена
0-1,color=lime
0,color=blue
w,1000
0,shape=box,color=yellow,label=0;dist: 3
0-1,color=red
p,вершина 3 еще не посещена
1-3,color=lime
3,color=blue
w,1000
3,shape=box,color=yellow,label=3;dist: 3
1-3,color=red
p,вершина 6 уже посещена
1-6,color=red
w,1000
p,Все ребра из вершины 1 просмотрены
1,color=green
w,1000
0,color=lime
p,вершина 1 уже посещена
0-1,color=red
w,1000
p,вершина 5 еще не посещена
0-5,color=lime
5,color=blue
w,1000
5,shape=box,color=yellow,label=5;dist: 4
0-5,color=red
p,вершина 4 еще не посещена
0-4,color=lime
4,color=blue
w,1000
4,shape=box,color=yellow,label=4;dist: 4
0-4,color=red
p,Все ребра из вершины 0 просмотрены
0,color=green
w,1000
3,color=lime
p,вершина 1 уже посещена
1-3,color=red
w,1000
p,вершина 4 еще не посещена
3-4,color=lime
4,color=blue
w,1000
4,shape=box,color=yellow,label=4;dist: 4
3-4,color=red
p,Все ребра из вершины 3 просмотрены
3,color=green
w,1000
5,color=lime
p,вершина 0 уже посещена
0-5,color=red
w,1000
p,Все ребра из вершины 5 просмотрены
5,color=green
w,1000
4,color=lime
p,вершина 3 уже посещена
3-4,color=red
w,1000
p,вершина 7 еще не посещена
4-7,color=lime
7,color=blue
w,1000
7,shape=box,color=yellow,label=7;dist: 5
4-7,color=red
p,вершина 0 уже посещена
0-4,color=red
w,1000
p,Все ребра из вершины 4 просмотрены
4,color=green
w,1000
7,color=lime
p,вершина 4 уже посещена
4-7,color=red
w,1000
p,Все ребра из вершины 7 просмотрены
7,color=green
w,1000
0-5,color=blue
w,1000
0-1,color=blue
w,1000
1-6,color=blue
w,1000
2-6,color=blue
w,1000
p,Минималный путь до вершины 5 из вершины 2: 4
`