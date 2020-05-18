#ifndef QUEUE_H_
#define QUEUE_H_
class Queue
{
private:
    const int MAX_SIZE = 100;
    int* array;
    int head;
    int rear;
    int getLength();
public:
    Queue();
    bool enqueue(int n);
    int getFront();
    int dequeue();
    bool isEmpty();
};

class LinkedQueue
{
private:
    typedef struct QueueNode
    {
        int data;
        QueueNode* next;
    }* Node;
    Node head, rear;
public:
    LinkedQueue();
    bool enqueue(int n);
    int getFront();
    int dequeue();
    bool isEmpty();
};
#endif // QUEUE_H_
