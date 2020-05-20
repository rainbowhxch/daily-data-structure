#ifndef _DOUBLE_LIST_H_

template <typename T>
class Double_list
{
    public:
        typedef struct _Node {
            _Node *prev, *next;
            T data;
        } *Node;
        Double_list();
        int size();
        bool remove(int index);
        bool insert(int index, T val);
        bool empty();
    private:
        Node _head;
        int _n;
};

#endif /* _DOUBLE_LIST_H_ */
