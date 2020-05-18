#include "BinaryTree.hpp"
#include <windows.h>
int main()
{
    BinaryTree* test1;
    int chance = 1;
    while (true)
    {
        cout << "Author:1710243231�º�ѫ\n"
        "1----����������\n"
        "2----�������\n"
        "3----����������ݹ�ͷǵݹ飩\n"
        "4----�������\n"
        "5----���ĸ߶ȣ���ȣ�\n"
        "6----����Ҷ�Ӹ���\n"
        "7----�������\n"
        "\t�˳�������һ������\n"
        "������BinaryTree1�Ĳ������룺";
        cin >> chance;
        if (chance < 0) break;
        int n;
        switch (chance)
        {
        case 1:
            cout << "������������ַ����У�";
            test1 = new BinaryTree();
            break;
        case 2:
            cout << "����������Ϊ��";
            test1->preorderTraverse();
            cout << endl;
            break;
        case 3:
            cout << "�ݹ�����������Ϊ��";
            test1->inorderTraverse();
            cout << endl;
            cout << "�ǵݹ�����������Ϊ��";
            test1->inorderTraverseNotRecursion();
            cout << endl;
            break;
        case 4:
            cout << "�ݹ����������Ϊ��";
            test1->postorderTraverse();
            cout << endl;
            break;
        case 5:
            cout << "���ĸ߶ȣ���ȣ�Ϊ��"<< test1->height() << endl;
            break;
        case 6:
            cout << "����Ҷ�Ӹ���Ϊ��" << test1->countLeaves() << endl;
            break;
        case 7:
            cout << "����������Ϊ��";
            test1->sequenceTraverse();
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

