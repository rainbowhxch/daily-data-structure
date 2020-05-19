#ifndef _HASH_LIST_H_
#include <map>
#include <list>
using std::list;
using std::map;

template <typename T, typename V>
class Hash_list
{
    public:
        Hash_list(int capacity);
        V get(T key);
        void put(T key, V val);
    private:
        typedef struct {
            T key;
            V val;
        } Node, *Node_ptr;
        int cap;
        list<Node> data;
        map<T, Node_ptr> hashmap;
};

#endif /* _HASH_LIST_H_ */
