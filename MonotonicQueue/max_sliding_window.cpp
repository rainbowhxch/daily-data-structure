#include "MonotonicQueue.h"
#include <vector>

using std::vector;

vector<int> max_sliding_window(const vector<int> &nums, int k)
{
    MonotonicQueue<int> window;
    vector<int> res;
    for (int i = 0;i < nums.size();++i) {
        window.push(nums[i]);
        if (i >= k - 1) {
            res.push_back(window.max());
            window.pop(nums[i-k+1]);
        }
    }

    return res;
}
