#include "hash_list.h"
#include <iterator>

template <typename T, typename V>
Hash_list<T, V>::Hash_list(int capacity)
{
    this->cap = capacity;
}

template <typename T, typename V>
V Hash_list<T, V>::get(T key)
{
    if (!hashmap.count(key))
        return nullptr;
    V val = hashmap[key]->val;
    put(key, val);
    return val;
}

template <typename T, typename V>
void Hash_list<T, V>::put(T key, V val)
{
    Node tmp = {key, val};
    if (!hashmap.count(key)) {
        if (cap == hashmap.size()) {
            T del = data.back().key;
            data.pop_back();
            hashmap.erase(del);
        }
    } else {
        /* error! */
        data.remove(*hashmap[key]);
    }

    data.push_front(move(tmp));
    hashmap[key] = &data.front();
}
