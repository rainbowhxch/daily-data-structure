#include <iostream>
#include <windows.h>
#include "Stack.hpp"
using namespace std;
#define ElemType LinkedStack
int main()
{
    ElemType* test1 = new ElemType();
    int chance = 1;
    while (true)
    {
        cout << "Author:1710243231�º�ѫ\n"
        "1----�ж�ջ�Ƿ�Ϊ��\n"
        "2----Ԫ����ջ\n"
        "3----�鿴ջ��Ԫ��\n"
        "4----Ԫ�س�ջ\n"
        "\t�˳�������һ������\n"
        "������Stack1�Ĳ������룺";
        cin >> chance;
        if (chance < 0) break;
        int n;
        switch (chance)
        {
        case 1:
            cout << "ջ�Ƿ�Ϊ�գ�" << test1->isEmpty() << endl;
            break;
        case 2:
            cout << "������Ԫ��ֵ��";
            cin >>  n;
            cout << "�Ƿ�ɹ���ջ��" << test1->push(n) << endl;
            break;
        case 3:
            cout << "ջ��Ԫ��Ϊ��" << test1->getTop() << endl;
            break;
        case 4:
            cout << "Ԫ���Ƿ��ջ��" << test1->pop() << endl;
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
