#ifndef LIST_H
#define LIST_H

class List
{
private:
    const static int maxLength = 100;
    int length;
    int* head;
public:
    List();
    bool InitList();
    int getLength();
    int getElem(int i);
    int findElem(int n);
    bool insertElem(int index, int n);
    bool deleteElem(int index);
    bool setElem(int index, int n);
    void traverse();
    bool isEmpty();
    bool getPrior(int index);
    bool getNext(int index);
    void distroyList();
    void clearList();

    //math methods
    friend List* listUnion(List* a, List* b);
    friend List* listIntersection(List* a, List* b);
    friend List* listDifference(List* a, List* b);
};

#endif // LIST_H
