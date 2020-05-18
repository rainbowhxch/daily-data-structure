#include "BinaryTree.hpp"
#include <windows.h>
int main()
{
    BinaryTree* test1;
    int chance = 1;
    while (true)
    {
        cout << "Author:1710243231陈恒勋\n"
        "1----创建二叉树\n"
        "2----先序遍历\n"
        "3----中序遍历（递归和非递归）\n"
        "4----后序遍历\n"
        "5----树的高度（深度）\n"
        "6----树的叶子个数\n"
        "7----层序遍历\n"
        "\t退出，输入一个负数\n"
        "请输入BinaryTree1的操作代码：";
        cin >> chance;
        if (chance < 0) break;
        int n;
        switch (chance)
        {
        case 1:
            cout << "请输入二叉树字符序列：";
            test1 = new BinaryTree();
            break;
        case 2:
            cout << "先序遍历结果为：";
            test1->preorderTraverse();
            cout << endl;
            break;
        case 3:
            cout << "递归中序遍历结果为：";
            test1->inorderTraverse();
            cout << endl;
            cout << "非递归中序遍历结果为：";
            test1->inorderTraverseNotRecursion();
            cout << endl;
            break;
        case 4:
            cout << "递归后序遍历结果为：";
            test1->postorderTraverse();
            cout << endl;
            break;
        case 5:
            cout << "树的高度（深度）为："<< test1->height() << endl;
            break;
        case 6:
            cout << "树的叶子个数为：" << test1->countLeaves() << endl;
            break;
        case 7:
            cout << "层序遍历结果为：";
            test1->sequenceTraverse();
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

