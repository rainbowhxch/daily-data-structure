#include "Queue.hpp"
#include <iostream>
//Queue Implement
Queue::Queue()
{
    array = new int[MAX_SIZE];
    rear = head = 0;
}

bool Queue::isEmpty()
{
    return head == rear;
}

int Queue::getLength()
{
    return (rear - head + MAX_SIZE) % MAX_SIZE;
}

bool Queue::enqueue(int n)
{
    if (getLength() == MAX_SIZE - 1)
        return false;
    array[rear] = n;
    rear = (rear + 1) % MAX_SIZE;
    return true;
}

int Queue::dequeue()
{
    if (isEmpty())
        return false;
    int t = array[head];
    head = (head + 1) % MAX_SIZE;
    return t;
}

int Queue::getFront()
{
    if (isEmpty())
        return -1;
    return array[head];
}

// LinkedQueue Implement
LinkedQueue::LinkedQueue()
{
    head = rear = new QueueNode;
    head->next = NULL;
}

bool LinkedQueue::isEmpty()
{
    return head == rear;
}

bool LinkedQueue::enqueue(int n)
{
    Node t = new QueueNode;
    t->data = n;
    t->next = NULL;
    rear->next = t;
    rear = t;
    return true;
}

int LinkedQueue::dequeue()
{
   if (isEmpty())
        return -1;
   Node t = head->next;
   head->next = t->next;
   int ret = t->data;
   if (t == rear)
        rear = head;
   delete t;
   return ret;
}

int LinkedQueue::getFront()
{
    if (isEmpty())
        return -1;
    return head->next->data;
}
