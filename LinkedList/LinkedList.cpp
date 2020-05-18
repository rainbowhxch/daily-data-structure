#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
    head = new Node;
    head->next = NULL;
    length = 0;
}

int LinkedList::getLength()
{
    return length;
}

int LinkedList::getElem(int pos)
{
    listNode p = head->next;
    int count = 1;
    while (p && count < pos)
    {
        p = p->next;
        ++count;
    }
    if (!p || count > pos)  return -1;
    return p->data;
}

bool LinkedList::insertElem(int pos, int n)
{
    int count = 1;
    listNode p = head;
    while (p && count < pos)
    {
        p = p->next;
        ++count;
    }
    if (!p || count > pos)    return false;
    listNode i = new Node;
    i->data = n;
    i->next = p->next;
    p->next = i;
    length++;
    return true;
}

LinkedList::listNode LinkedList::findElem(int n)
{
    listNode p = head->next;
    while(p && p->data != n)
    {
        p = p->next;
    }
    return p;
}

bool LinkedList::deleteElem(int pos)
{
    listNode p = head;
    int count = 1;
    while(p && count < pos)
    {
        p = p->next;
        ++count;
    }
    if (!p || pos < count)  return false;
    listNode t = p->next;
    p->next = t->next;
    delete t;
    length--;
    return true;
}

LinkedList* mergeList(LinkedList* a, LinkedList* b)
{
    LinkedList* temp = new LinkedList();
    LinkedList::listNode pa = a->head->next;
    LinkedList::listNode pb = b->head->next;
    LinkedList::listNode pt = temp->head;
    while (pa && pb)
    {
        if (pa->data <= pb->data)
        {
            pt->next = pa;
            pt = pa;
            pa = pa->next;
        }
        else
        {
            pt->next = pb;
            pt = pb;
            pb = pb->next;
        }
        pt->next = pa ? pa : pb;
    }
    return temp;
}

void LinkedList::traverse()
{
    listNode p = head->next;
    while (p)
    {
        cout << p->data << ' ';
        p = p->next;
    }
    cout << endl;
}

bool LinkedList::isEmpty()
{
    return length == 0;
}
