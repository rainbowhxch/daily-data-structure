#include "LinkedList.h"
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    LinkedList* test1 = new LinkedList();
    LinkedList* test2 = new LinkedList();
    test2->insertElem(1, 1);
    test2->insertElem(2, 2);
    test2->insertElem(3, 3);
    int chance = 1;
    while (true)
    {
        cout << "1----判断线性表是否为空\n"
        "2----求线性表长度\n"
        "3----获得线性表指定位置元素\n"
        "4----在线性表指定位置插入元素\n"
        "5----删除线性表指定位置元素\n"
        "6----显示线性表\n"
        "7----查找元素"
        "\t退出，输入一个负数\n"
        "请输入List1的操作代码：";
        cin >> chance;
        if (chance < 0) break;
        int index, n;
        LinkedList::listNode ln;
        switch (chance)
        {
        case 1:
            cout << "线性表是否为空：" << test1->isEmpty() << endl;
            break;
        case 2:
            cout << "线性表的长度为：" << test1->getLength() << endl;
            break;
        case 3:
            cout << "请输入元素位置：";
            cin >> index;
            cout << "对应的元素为：" << test1->getElem(index) << endl;
            break;
        case 4:
            cout << "请输入位置与元素值：";
            cin >> index >> n;
            cout << "是否成功插入：" << test1->insertElem(index, n) << endl;
            break;
        case 5:
            cout << "请输入元素位置：";
            cin >> index;
            cout << "是否成功删除：" << test1->deleteElem(index) << endl;
            break;
        case 6:
            cout << "线性表遍历结果为：";
            test1->traverse();
            cout << endl;
            break;
        case 7:
            cout << "请输入元素值：";
            cin >> index;
            ln = test1->findElem(index);
            if (ln == NULL)    cout << "不存在" << endl;
            else    cout << "元素存在" << endl;
            break;
        default:
            cout << "输入有误，请重新输入..." << endl;
            break;
        }
        system("pause");
        system("cls");
    }
    cout << "test2遍历结果为：";
    test2->traverse();
    LinkedList* temp = mergeList(test1, test2);
    cout << "两个单链表归并后，结果为：";
    temp->traverse();
}
