#ifndef _BIN_HEAP_H_
#include <vector>
using namespace std;

template<typename T>
class heap
{
public:
    heap(int cap);
    void insert(T val);
    T delete_max();
    void sink(int k);
    void swim(int k);
private:
    T *_data;
    int _n;
    void _swap(int a, int b);
    bool _less_than(int a, int b);
    int _parent(int i);
    int _lchild(int i);
    int _rchild(int i);
};

#endif /*_BIN_HEAP_H_*/
