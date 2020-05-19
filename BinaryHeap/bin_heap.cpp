#include "bin_heap.h"
#include <type_traits>

template<typename T>
heap<T>::heap(int cap)
{
    _data = new T[cap + 1];
    _n = 0;
}

template<typename T>
void heap<T>::insert(T val)
{
    _data[++_n] = val;
    swim(_n);
}

template<typename T>
T heap<T>::delete_max()
{
    T res = _data[1];
    _swap(1, _n);
    _n--;
    sink(1);
    return res;
}

template<typename T>
void heap<T>::sink(int k)
{
    int l = _lchild(k);
    int r = _rchild(k);
    while (l <= _n) {
        int large = l;
        if (r <= _n && _less_than(l, r))
            large = r;
        if (_less_than(large, k)) return;
        _swap(k, large);
        k = large;
    }
}

template<typename T>
void heap<T>::swim(int k)
{
    int p = _parent(k);
    while (k > 1 && _less_than(p, k)) {
        _swap(k, p);
        k = p;
    }
}

template<typename T>
void heap<T>::_swap(int a, int b)
{
    T tmp = _data[a];
    _data[a] = _data[b];
    _data[b] = tmp;
}

template<typename T>
bool heap<T>::_less_than(int a, int b)
{
    return _data[a] < _data[b];
}

template<typename T>
int heap<T>::_parent(int i)
{
    return i / 2;
}

template<typename T>
int heap<T>::_lchild(int i)
{
    return i * 2;
}

template<typename T>
int heap<T>::_rchild(int i)
{
    return i * 2 + 1;
}
