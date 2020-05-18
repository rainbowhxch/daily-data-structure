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
    //�ڽӾ���
    char vexs[MVNum];
    int arcs[MVNum][MVNum];
    int locateVex(char vex);
    //�ڽӱ�
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
    //���ֱ���ֻ�����ͨͼ
    void DFS(int v);
    void BFS(int v);
    void shortestPath_Dijkstra(int v0);
};

#endif // GRAPHIC_H_
