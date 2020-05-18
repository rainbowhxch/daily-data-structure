#ifndef GRAPHIC_H_
#define GRAPHIC_H_
#include <iostream>
#include <climits>
#include <queue>
using namespace std;
class Graphic
{
private:
    static const int MVNum = 100;
    static const int MaxNum = 1000000;
    bool visited[MVNum];
    int vexnum, arcnum;
    //邻接矩阵
    char vexs[MVNum];
    int arcs[MVNum][MVNum];
    int locateVex(char vex);
    //邻接表
    typedef struct ArcNode
    {
        int adjvex;
        ArcNode* next;
        int info;
    };
    typedef struct VNode
    {
        char data;
        ArcNode* firstArc;
    }AdjList;

    AdjList vertices[MVNum];
    //Dijkstra
    int D[MVNum];
    int Path[MVNum];
    void printPath(int v0);
public:
    Graphic();
    //两种遍历只针对连通图
    void DFS(int v);
    void BFS(int v);
    void shortestPath_Dijkstra(int v0);
};

#endif // GRAPHIC_H_
