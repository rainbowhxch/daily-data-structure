#include "Graphic.hpp"

Graphic::Graphic()
{
    cout << "请输入点的个数及边数：";
    cin >> vexnum >> arcnum;
    cout << "请输入各点值：";
    for (int i = 0;i < vexnum;++i)
    {
        cin >> vexs[i];
        visited[i] = false;
        vertices[i].data = vexs[i];
        vertices[i].firstArc = NULL;
    }
    for (int i = 0;i < vexnum;++i)
        for (int j = 0;j < vexnum;++j)
            arcs[i][j] = MaxNum;
    char v1,v2;int w;
    cout << "请输入边及权值：" << endl;
    for (int k = 0;k < arcnum;++k)
    {
        cin >> v1 >> v2;
        cin >> w;
        int i = locateVex(v1), j = locateVex(v2);
        arcs[i][j] = w;

        ArcNode* p1 = new ArcNode;
        p1->adjvex = j;
        p1->next = vertices[i].firstArc;
        vertices[i].firstArc = p1;
    }
}

int Graphic::locateVex(char vex)
{
    for (int i = 0;i < vexnum;++i)
        if (vexs[i] == vex)
            return i;
}

void Graphic::DFS(int v)
{
    cout << vexs[v];visited[v] = true;
    for (int i = 0;i < vexnum;++i)
    {
        if (arcs[v][i] != MaxNum && !visited[i])
            DFS(i);
    }
}

void Graphic::BFS(int v)
{
    for (int i = 0;i < vexnum;++i)  visited[i] = false;
    cout << vexs[v];visited[v] = true;
    queue<int> q;
    q.push(v);
    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        for (ArcNode* i = vertices[t].firstArc;i != NULL;i = i->next)
        {
            int n = i->adjvex;
            if (!visited[n])
            {
                cout << vexs[n];visited[n] = true;
                q.push(n);
            }
        }
    }
}

void Graphic::shortestPath_Dijkstra(int v0)
{
    for (int i = 0;i < vexnum;++i)
    {
        visited[i] = false;
        D[i] = arcs[v0][i];
        if (D[i] < MaxNum)  Path[i] = v0;
        else Path[i] = -1;
    }
    visited[v0] = true;
    D[v0] = 0;
    for (int i = 1;i < vexnum;++i)
    {
        int Min = MaxNum;
        int v;
        for (int j = 0;j < vexnum;++j)
        {
            if (!visited[j] && D[j] < Min)
            {
                v = j;Min = D[j];
            }
        }
        visited[v] = true;
        for (int j = 0;j < vexnum;++j)
        {
            if (!visited[j] && (arcs[v][j] + Min < D[j]))
            {
                D[j] = arcs[v][j] + Min;Path[j] = v;
            }
        }
    }
    cout << vexs[v0] << "到各点的最短路径为：" << endl;
    for (int i = 0;i < vexnum;++i)
    {
        if (i != v0)
        {
            cout << vexs[i] << "；";printPath(i);cout << endl;
        }
    }
}

void Graphic::printPath(int v0)
{
    if (Path[v0] == -1)
    {
        cout << vexs[v0];
        return;
    }
    printPath(Path[v0]);
    cout << "->" << vexs[v0];
}
