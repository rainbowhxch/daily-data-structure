#include "double_list.h"

template <typename T>
Double_list<T>::Double_list()
{
    this->_head = new Node;
    this->_head->next = nullptr;
    this->n = 0;
}


template <typename T>
int Double_list<T>::size()
{
    return _n;
}

template <typename T>
bool Double_list<T>::remove(int index)
{
    if (index < 0 || index >= _n) return false;
    int i = 0; Node cur = _head->next;
    while (i++ < index)
        cur = cur->next;
    cur->prev->next = cur->next;
    cur->next->prev = cur->prev;
    delete cur;
    _n--;
    return true;
}

template <typename T>
bool Double_list<T>::insert(int index, T val)
{
    if (index < 0 || index >= _n)
        return false;
    Node tmp = new Node;
    tmp->val = val;
    int i = 0; Node cur = _head;
    while (i++ < index)
        cur = cur->next;
    tmp->next = cur->next; tmp->prev = cur;
    cur->next->prev = tmp; cur->next = tmp;
    _n++;
    return true;
}

template <typename T>
bool Double_list<T>::empty()
{
    return _n == 0;
}
