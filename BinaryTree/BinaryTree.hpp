#ifndef BINARYTREE_H_
#define BINARYTREE_H_
#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;
class BinaryTree
{
private:
    typedef struct TreeNode
    {
        char data;
        TreeNode* lChild;
        TreeNode* rChild;
    }* Node;
    Node root;
    void buildTree(Node& t);
    void preorder(Node t);
    void inorder(Node t);
    void postorder(Node t);
    void inorderTraverseNotRecursion(Node t);
    void inorderNotRecursion(Node t);
    void sequenceTraverse(Node t);
    int getHeight(Node t);
    int getCountLeaves(Node t);
public:
    BinaryTree();
    void preorderTraverse();
    void inorderTraverse();
    void postorderTraverse();
    void sequenceTraverse();
    void inorderTraverseNotRecursion();
    int height();
    int countLeaves();
};
#endif // BINARYTREE_H_
