#ifndef LINKEDLIST_H
#define LINKEDLIST_H
class LinkedList
{
public:
    typedef struct Node
    {
        int data;
        Node* next;
    }*listNode;

private:
    listNode  head;
    int length;
public:
    LinkedList();
    int getLength();
    int getElem(int pos);
    bool insertElem(int pos, int n);
    listNode findElem(int n);
    bool deleteElem(int pos);
    void traverse();
    bool isEmpty();
    friend LinkedList* mergeList(LinkedList* a, LinkedList* b);
};



#endif // LINKEDLIST_H
