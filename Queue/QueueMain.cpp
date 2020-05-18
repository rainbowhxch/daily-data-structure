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
        cout << "Author:1710243231陈恒勋\n"
        "1----判断队列是否为空\n"
        "2----元素入队\n"
        "3----查看队头元素\n"
        "4----元素出队\n"
        "\t退出，输入一个负数\n"
        "请输入Queue1的操作代码：";
        cin >> chance;
        if (chance < 0) break;
        int n;
        switch (chance)
        {
        case 1:
            cout << "队列是否为空：" << test1->isEmpty() << endl;
            break;
        case 2:
            cout << "请输入元素值：";
            cin >>  n;
            cout << "是否成功入队：" << test1->enqueue(n) << endl;
            break;
        case 3:
            cout << "队头元素为：" << test1->getFront() << endl;
            break;
        case 4:
            cout << "出队元素为：" << test1->dequeue() << endl;
            break;
        default:
            cout << "输入有误，请重新输入..." << endl;
            break;
        }
        system("pause");
        system("cls");
    }
    return 0;
}

