#include "Graphic.hpp"
#include <windows.h>
int main()
{
    Graphic* test1;
    int chance = 1;
    cout << "Author:1710243231陈恒勋\n"
        "1----创建Graphic（邻接表和邻接矩阵）\n"
        "2----深度优先遍历\n"
        "3----广度优先遍历\n"
        "4----最短路径（Dijkstra算法）\n"
        "\t退出，输入一个负数\n";
    while (true)
    {
        cout << "请输入Graphic1的操作代码：";
        cin >> chance;
        if (chance < 0) break;
        string s;
        switch (chance)
        {
        case 1:
            cout << "创建Graphic：" << endl;
            test1 = new Graphic();
            break;
        case 2:
            cout << "深度优先遍历：";
            test1->DFS(0);
            cout << endl;
            break;
        case 3:
            cout << "广度优先遍历：";
            test1->BFS(0);
            cout << endl;
            break;
        case 4:
            cout << "最短路径结果：";
            test1->shortestPath_Dijkstra(0);
            break;
        default:
            cout << "输入有误，请重新输入..." << endl;
            break;
        }
    }
    return 0;
}
