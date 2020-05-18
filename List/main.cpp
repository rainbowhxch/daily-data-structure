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
        cout << "1----������Ա�\n"
        "2----�ж����Ա��Ƿ�Ϊ��\n"
        "3----�����Ա���\n"
        "4----������Ա�ָ��λ��Ԫ��\n"
        "5----��ǰ��\n"
        "6----�����\n"
        "7----�����Ա�ָ��λ�ò���Ԫ��\n"
        "8----ɾ�����Ա�ָ��λ��Ԫ��\n"
        "9----��ʾ���Ա�\n"
        "10---����Ԫ��\n"
        "\t�˳�������һ������\n"
        "������List1�Ĳ������룺";
        cin >> chance;
        if (chance < 0) break;
        int index, n;
        switch (chance)
        {
        case 1:
            test1->clearList();
            cout << "���Ա������" << endl;
            break;
        case 2:
            cout << "���Ա��Ƿ�Ϊ�գ�" << test1->isEmpty() << endl;
            break;
        case 3:
            cout << "���Ա�ĳ���Ϊ��" << test1->getLength() << endl;
            break;
        case 4:
            cout << "������Ԫ��λ�ã�";
            cin >> index;
            cout << "��Ӧ��Ԫ��Ϊ��" << test1->getElem(index) << endl;
            break;
        case 5:
            cout << "������Ԫ��λ�ã�";
            cin >> index;
            if (test1->getPrior(index) == false) cout << "����Ԫ��λ�ô���" << endl;
            break;
        case 6:
            cout << "������Ԫ��λ�ã�";
            cin >> index;
            if (test1->getNext(index) == false) cout << "����Ԫ��λ�ô���" << endl;
            break;
        case 7:
            cout << "������λ����Ԫ��ֵ��";
            cin >> index >> n;
            cout << "�Ƿ�ɹ����룺" << test1->insertElem(index, n) << endl;
            break;
        case 8:
            cout << "������Ԫ��λ�ã�";
            cin >> index;
            cout << "�Ƿ�ɹ�ɾ����" << test1->deleteElem(index) << endl;
            break;
        case 9:
            cout << "���Ա�������Ϊ��";
            test1->traverse();
            cout << endl;
            break;
        case 10:
            cout << "������Ԫ��ֵ��";
            cin >> index;
            n = test1->findElem(index);
            if (n == -1)    cout << "������" << endl;
            else    cout << "Ԫ��λ��Ϊ��" << n << endl;
            break;
        default:
            cout << "������������������..." << endl;
            break;
        }
        system("pause");
        system("cls");
    }
    cout << "List1��Ԫ��Ϊ��";
    test1->traverse();
    cout << endl;
    cout << "List2��Ԫ��Ϊ��";
    test2->traverse();
    cout << endl;
    cout << "�������Ա�Ĳ���Ϊ��" ;
    listUnion(test1, test2)->traverse();
    cout << endl;
    cout << "�������Ա�Ľ���Ϊ��" << endl;
    listIntersection(test1, test2)->traverse();
    cout << endl;
    cout << "�������Ա�ĲΪ��" << endl;
    listDifference(test1, test2)->traverse();
    return 0;
}
