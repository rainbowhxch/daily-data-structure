#include <iostream>
#include <windows.h>
#include "Queue.hpp"
#define ElemType LinkedQueue
using namespace std;
int main()
{
    ElemType* test1 = new ElemType();
    int chance = 1;
    while (true)
    {
        cout << "Author:1710243231�º�ѫ\n"
        "1----�ж϶����Ƿ�Ϊ��\n"
        "2----Ԫ�����\n"
        "3----�鿴��ͷԪ��\n"
        "4----Ԫ�س���\n"
        "\t�˳�������һ������\n"
        "������Queue1�Ĳ������룺";
        cin >> chance;
        if (chance < 0) break;
        int n;
        switch (chance)
        {
        case 1:
            cout << "�����Ƿ�Ϊ�գ�" << test1->isEmpty() << endl;
            break;
        case 2:
            cout << "������Ԫ��ֵ��";
            cin >>  n;
            cout << "�Ƿ�ɹ���ӣ�" << test1->enqueue(n) << endl;
            break;
        case 3:
            cout << "��ͷԪ��Ϊ��" << test1->getFront() << endl;
            break;
        case 4:
            cout << "����Ԫ��Ϊ��" << test1->dequeue() << endl;
            break;
        default:
            cout << "������������������..." << endl;
            break;
        }
        system("pause");
        system("cls");
    }
    return 0;
}

