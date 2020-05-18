#include "BinaryTree.hpp"
//public
BinaryTree::BinaryTree()
{
    buildTree(root);
}

void BinaryTree::preorderTraverse()
{
    preorder(root);
}

void BinaryTree::inorderTraverse()
{
    inorder(root);
}

void BinaryTree::postorderTraverse()
{
    postorder(root);
}

void BinaryTree::sequenceTraverse()
{
    sequenceTraverse(root);
}

void BinaryTree::inorderTraverseNotRecursion()
{
    inorderNotRecursion(root);
}

int BinaryTree::height()
{
    return getHeight(root);
}

int BinaryTree::countLeaves()
{
    return getCountLeaves(root);
}
//private
void BinaryTree::buildTree(Node& t)
{
    char ch;
    cin >> ch;
    if (ch == '#')  t = NULL;
    else
    {
        t = new TreeNode();
        t->data = ch;
        buildTree(t->lChild);
        buildTree(t->rChild);
    }
}

void BinaryTree::preorder(Node t)
{
    if(t == NULL)
        return;
    cout << t->data;
    preorder(t->lChild);
    preorder(t->rChild);
}

void BinaryTree::inorder(Node t)
{
    if (t == NULL)  return;
    inorder(t->lChild);
    cout << t->data;
    inorder(t->rChild);
}

void BinaryTree::postorder(Node t)
{
    if (t == NULL) return;
    postorder(t->lChild);
    postorder(t->rChild);
    cout << t->data;
}

void BinaryTree::sequenceTraverse(Node t)
{
    queue<Node> q;
	q.push(t);
	while (!q.empty())
	{
		Node tmp = q.front();
		q.pop();
		cout << tmp->data << " ";
		if (tmp->lChild != NULL)	q.push(tmp->lChild);
		if (tmp->rChild != NULL)	q.push(tmp->rChild);
	}
	cout << endl;
}

void BinaryTree::inorderNotRecursion(Node t)
{
    stack<Node> s;
    Node p = t;
    while (p || !s.empty())
    {
        if (p)
        {
            s.push(p);
            p = p->lChild;
        }
        else
        {
            p = s.top();
            s.pop();
            cout << p->data;
            p = p->rChild;
        }
    }
}

int BinaryTree::getHeight(Node t)
{
    if (t == NULL)
        return 0;
    int MAX= max(getHeight(t->lChild), getHeight(t->rChild));
    return MAX + 1;
}

int BinaryTree::getCountLeaves(Node t)
{
    if (t == NULL)
        return 0;
    if (t->lChild == NULL && t->rChild == NULL)
        return 1;
    else
        return getCountLeaves(t->lChild) + getCountLeaves(t->rChild);
}
