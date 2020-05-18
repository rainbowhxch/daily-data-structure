#include "Stack.hpp"
#include <iostream>
using namespace std;
//Stack Implement
Stack::Stack()
{
    bottom = new int[MAX_SIZE];
    top = bottom;
}

bool Stack::isEmpty()
{
    return top == bottom;
}

int Stack::getLength()
{
    return top - bottom;
}

bool Stack::push(int n)
{
    if (getLength() == MAX_SIZE)
        return false;
    *top++ = n;
    return true;
}

int Stack::getTop()
{
    if (isEmpty())
        return -1;
    return *(top-1);
}

bool Stack::pop()
{
    if (isEmpty())
        return false;
    top--;
    return true;
}

//LinkedStack Implement
LinkedStack::LinkedStack()
{
    top = NULL;
    length = 0;
}

bool LinkedStack::push(int n)
{
    Node t = new StackNode;
    t->data = n;
    t->next = top;
    top = t;
    return true;
}

bool LinkedStack::pop()
{
    if (isEmpty())
        return false;
    Node t = top;
    top = top->next;
    delete t;
    return true;
}

int LinkedStack::getTop()
{
    if (isEmpty())
        return -1;
    return top->data;
}

bool LinkedStack::isEmpty()
{
    return top == NULL;
}
