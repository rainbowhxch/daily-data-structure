#include "List.h"
#include <iostream>
using namespace std;
List::List()
{
    InitList();
}

int List::getLength()
{
    return length;
}

bool List::InitList()
{
    head = new int[maxLength];
    if (!head)  return false;
    length = 0;
    return true;
}

int List::getElem(int i)
{
    if (i < 1 || i > length)
        return -1;
    else
        return head[i - 1];
}

int List::findElem(int n)
{
    for (int i = 0;i < length;++i)
    {
        if (head[i] == n)
        return i + 1;
    }
    return -1;
}

bool List::insertElem(int index, int n)
{
    if (index < 1 || index > length + 1)   return false;
    if (length == maxLength)    return false;
    for (int i = length - 1;i >= index - 1;--i)//1
    {
        head[i + 1] = head[i];
    }
    length++;
    head[index - 1] = n;
    return true;
}

bool List::deleteElem(int index)
{
    if (index < 1 || index > length)    return false;
    for (int i = index - 1;i < length;++i)
    {
        head[i] = head[i + 1];
    }
    length--;
    return true;
}

bool List::setElem(int index, int n)
{
    if (index < 0 || index > length)
        return false;
    head[index - 1] = n;
    return true;
}

void List::traverse()
{
    for (int i = 1;i <= length;++i)
    {
        cout << getElem(i) << ' ';
    }
}

bool List::isEmpty()
{
    return length == 0;
}

bool List::getPrior(int index)
{
    if (index < 2 || index > length)    return false;
    cout<< "元素前驱是：" << head[index - 2] << endl;
    return true;
}

bool List::getNext(int index)
{
    if (index < 1 || index > length - 1)    return false;
    cout<< "元素后继是：" << head[index] << endl;
    return true;
}

void List::distroyList()
{
    if (head)
        delete [] head;
    length = 0;
    head = NULL;
}

void List::clearList()
{
    length = 0;
}

List* listUnion(List* a, List* b)
{
    List* temp = new List();
    for (int i = 1;i <= a->getLength();++i)
        temp->insertElem(temp->getLength() + 1, a->getElem(i));
    for (int i = 1;i <= b->getLength();++i)
        temp->insertElem(temp->getLength() + 1, b->getElem(i));
    for (int i = 1;i <= temp->getLength() - 1;++i)
    {
        if (temp->getElem(i + 1) == temp->getElem(i))
            temp->deleteElem(i + 1);
    }
    return temp;
}

List* listIntersection(List* a, List* b)
{
    List* temp = new List();
    for (int i = 1;i <= a->getLength();++i)
    {
        for (int j = 1;j <= b->getLength();++j)
        {
            if (a->getElem(i) == b->getElem(j))
                temp->insertElem(temp->getLength() + 1, a->getElem(i));
        }
    }
    for (int i = 1;i <= temp->getLength() - 1;++i)
    {
        if (temp->getElem(i + 1) == temp->getElem(i))
            temp->deleteElem(i + 1);
    }
    return temp;
}

List* listDifference(List* a, List* b)
{
    List* temp = new List();
    List* u = listUnion(a, b);
    List* i = listIntersection(a, b);
    for (int j = 1;j <= u->getLength();++j)
    {
        if (i->findElem(u->getElem(j)) == -1)
            temp->insertElem(temp->getLength() + 1, u->getElem(j));
    }
    return temp;
}
