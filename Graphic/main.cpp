#include "Graphic.hpp"
#include <windows.h>
int main()
{
    Graphic* test1;
    int chance = 1;
    cout << "Author:1710243231�º�ѫ\n"
        "1----����Graphic���ڽӱ���ڽӾ���\n"
        "2----������ȱ���\n"
        "3----������ȱ���\n"
        "4----���·����Dijkstra�㷨��\n"
        "\t�˳�������һ������\n";
    while (true)
    {
        cout << "������Graphic1�Ĳ������룺";
        cin >> chance;
        if (chance < 0) break;
        string s;
        switch (chance)
        {
        case 1:
            cout << "����Graphic��" << endl;
            test1 = new Graphic();
            break;
        case 2:
            cout << "������ȱ�����";
            test1->DFS(0);
            cout << endl;
            break;
        case 3:
            cout << "������ȱ�����";
            test1->BFS(0);
            cout << endl;
            break;
        case 4:
            cout << "���·�������";
            test1->shortestPath_Dijkstra(0);
            break;
        default:
            cout << "������������������..." << endl;
            break;
        }
    }
    return 0;
}
