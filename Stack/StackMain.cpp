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
        cout << "Author:1710243231陈恒勋\n"
        "1----判断栈是否为空\n"
        "2----元素入栈\n"
        "3----查看栈顶元素\n"
        "4----元素出栈\n"
        "\t退出，输入一个负数\n"
        "请输入Stack1的操作代码：";
        cin >> chance;
        if (chance < 0) break;
        int n;
        switch (chance)
        {
        case 1:
            cout << "栈是否为空：" << test1->isEmpty() << endl;
            break;
        case 2:
            cout << "请输入元素值：";
            cin >>  n;
            cout << "是否成功入栈：" << test1->push(n) << endl;
            break;
        case 3:
            cout << "栈顶元素为：" << test1->getTop() << endl;
            break;
        case 4:
            cout << "元素是否出栈：" << test1->pop() << endl;
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
