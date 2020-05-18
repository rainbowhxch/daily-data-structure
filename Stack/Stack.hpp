#ifndef STACK_H_
#define STACK_H_
class Stack
{
private:
    const int MAX_SIZE = 100;
    int* bottom;
    int* top;
    int getLength();
public:
    Stack();
    bool push(int n);
    int getTop();
    bool pop();
    bool isEmpty();
};

class LinkedStack
{
private:
    typedef struct StackNode
    {
        int data;
        StackNode* next;
    }* Node;
    Node top;
    int length;
public:
    LinkedStack();
    bool push(int n);
    int getTop();
    bool pop();
    bool isEmpty();
};
#endif // STACK_H_
