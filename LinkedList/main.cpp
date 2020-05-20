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
        cout << "1----�ж����Ա��Ƿ�Ϊ��\n"
        "2----�����Ա���\n"
        "3----������Ա�ָ��λ��Ԫ��\n"
        "4----�����Ա�ָ��λ�ò���Ԫ��\n"
        "5----ɾ�����Ա�ָ��λ��Ԫ��\n"
        "6----��ʾ���Ա�\n"
        "7----����Ԫ��"
        "\t�˳�������һ������\n"
        "������List1�Ĳ������룺";
        cin >> chance;
        if (chance < 0) break;
        int index, n;
        LinkedList::listNode ln;
        switch (chance)
        {
        case 1:
            cout << "���Ա��Ƿ�Ϊ�գ�" << test1->isEmpty() << endl;
            break;
        case 2:
            cout << "���Ա�ĳ���Ϊ��" << test1->getLength() << endl;
            break;
        case 3:
            cout << "������Ԫ��λ�ã�";
            cin >> index;
            cout << "��Ӧ��Ԫ��Ϊ��" << test1->getElem(index) << endl;
            break;
        case 4:
            cout << "������λ����Ԫ��ֵ��";
            cin >> index >> n;
            cout << "�Ƿ�ɹ����룺" << test1->insertElem(index, n) << endl;
            break;
        case 5:
            cout << "������Ԫ��λ�ã�";
            cin >> index;
            cout << "�Ƿ�ɹ�ɾ����" << test1->deleteElem(index) << endl;
            break;
        case 6:
            cout << "���Ա�������Ϊ��";
            test1->traverse();
            cout << endl;
            break;
        case 7:
            cout << "������Ԫ��ֵ��";
            cin >> index;
            ln = test1->findElem(index);
            if (ln == NULL)    cout << "������" << endl;
            else    cout << "Ԫ�ش���" << endl;
            break;
        default:
            cout << "������������������..." << endl;
            break;
        }
        system("pause");
        system("cls");
    }
    cout << "test2�������Ϊ��";
    test2->traverse();
    LinkedList* temp = mergeList(test1, test2);
    cout << "����������鲢�󣬽��Ϊ��";
    temp->traverse();
}
