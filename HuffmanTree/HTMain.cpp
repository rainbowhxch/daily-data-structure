#include "HuffmanTree.hpp"
#include <windows.h>
int main()
{
    HuffmanTree* test1;
    int chance = 1;
    while (true)
    {
        cout << "1----����HuffmanTree�Ĳ���\n"
        "2----��ʼ��HuffmanTree�Ĳ���.����26����ĸ�Ϳո�\n"
        "3----��������\n"
        "4----������벢����Ϊ�ַ�\n"
        "5----�����ַ���ʵ��ת��\n"
        "\t�˳�������һ������\n"
        "������HuffmanTree1�Ĳ������룺";
        cin >> chance;
        if (chance < 0) break;
        int n;
        string s;
        switch (chance)
        {
        case 1:
            cout << "������HuffmanTree�Ĳ�����";
            test1 = new HuffmanTree();
            break;
        case 2:
            cout << "��ʼ��HuffmanTree����.����26����ĸ���ո񣩣�";
            test1->initial();
            break;
        case 3:
            cout << "��������\n";
            test1->codeDisplay();
            cout << endl;
            break;
        case 4:
            cout << "������룺";
            getchar();
            getline(cin, s);
            cout << "����ɵ��ַ�Ϊ��";
            test1->decode(s);
            break;
        case 5:
            cout << "�����ַ���";
            getchar();
            getline(cin, s);
            cout << "����ɵı���Ϊ��";
            test1->encode(s);
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
