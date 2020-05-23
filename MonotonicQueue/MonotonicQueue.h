#include <deque>

using std::deque;

template <typename T>
class MonotonicQueue
{
    public:
        MonotonicQueue<T>() = default;
        void push(T n);
        void pop(T n);
        T max();
    private:
        deque<T> data;
};
