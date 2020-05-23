#include "MonotonicQueue.h"

template <typename T>
void MonotonicQueue<T>::push(T n)
{
    while (!data.empty() && data.back() < n)
        data.pop_back();
    data.push_back(n);
}

template <typename T>
void MonotonicQueue<T>::pop(T n)
{
    if (!data.empty() && data.front() == n)
        data.pop_front();
}

template <typename T>
T MonotonicQueue<T>::max()
{
    return data.front();
}
