#include <stack>
#include <algorithm>

using std::stack;
using std::min;

stack<int> data_stack;
stack<int> min_stack;

void push(int n)
{
    data_stack.push(n);
    min_stack.push(min_stack.empty() ? n : min(n, min_stack.top()));
}

void pop()
{
    data_stack.pop();
    min_stack.pop();
}

int top()
{
    return data_stack.top();
}

int mmin()
{
    return min_stack.top();
}
