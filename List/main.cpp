#include <iostream>
#include "List.h"
#include <windows.h>
using namespace std;

int main()
{
    List* test1 = new List();
    List* test2 = new List();
    test2->insertElem(1, 1);
    test2->insertElem(2, 2);
    test2->insertElem(3, 3);
    int chance = 1;
    while (true)
    {
        cout << "1----清空线性表\n"
        "2----判断线性表是否为空\n"
        "3----求线性表长度\n"
        "4----获得线性表指定位置元素\n"
        "5----求前驱\n"
        "6----求后续\n"
        "7----在线性表指定位置插入元素\n"
        "8----删除线性表指定位置元素\n"
        "9----显示线性表\n"
        "10---查找元素\n"
        "\t退出，输入一个负数\n"
        "请输入List1的操作代码：";
        cin >> chance;
        if (chance < 0) break;
        int index, n;
        switch (chance)
        {
        case 1:
            test1->clearList();
            cout << "线性表已清空" << endl;
            break;
        case 2:
            cout << "线性表是否为空：" << test1->isEmpty() << endl;
            break;
        case 3:
            cout << "线性表的长度为：" << test1->getLength() << endl;
            break;
        case 4:
            cout << "请输入元素位置：";
            cin >> index;
            cout << "对应的元素为：" << test1->getElem(index) << endl;
            break;
        case 5:
            cout << "请输入元素位置：";
            cin >> index;
            if (test1->getPrior(index) == false) cout << "输入元素位置错误" << endl;
            break;
        case 6:
            cout << "请输入元素位置：";
            cin >> index;
            if (test1->getNext(index) == false) cout << "输入元素位置错误" << endl;
            break;
        case 7:
            cout << "请输入位置与元素值：";
            cin >> index >> n;
            cout << "是否成功插入：" << test1->insertElem(index, n) << endl;
            break;
        case 8:
            cout << "请输入元素位置：";
            cin >> index;
            cout << "是否成功删除：" << test1->deleteElem(index) << endl;
            break;
        case 9:
            cout << "线性表遍历结果为：";
            test1->traverse();
            cout << endl;
            break;
        case 10:
            cout << "请输入元素值：";
            cin >> index;
            n = test1->findElem(index);
            if (n == -1)    cout << "不存在" << endl;
            else    cout << "元素位置为：" << n << endl;
            break;
        default:
            cout << "输入有误，请重新输入..." << endl;
            break;
        }
        system("pause");
        system("cls");
    }
    cout << "List1的元素为：";
    test1->traverse();
    cout << endl;
    cout << "List2的元素为：";
    test2->traverse();
    cout << endl;
    cout << "两个线性表的并集为：" ;
    listUnion(test1, test2)->traverse();
    cout << endl;
    cout << "两个线性表的交集为：" << endl;
    listIntersection(test1, test2)->traverse();
    cout << endl;
    cout << "两个线性表的差集为：" << endl;
    listDifference(test1, test2)->traverse();
    return 0;
}
