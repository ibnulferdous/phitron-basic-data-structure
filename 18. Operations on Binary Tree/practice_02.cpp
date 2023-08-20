#include <bits/stdc++.h>

using namespace std;

template <typename T>
class BinaryTreeNode {
    public:
    T val;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int> v;

    if (!root) return v;

    queue<BinaryTreeNode<int> *> q;

    q.push(root);

    while (!q.empty())
    {
        // 1. front k kothao save koro and queue theke ber koro
        BinaryTreeNode<int> * front = q.front();
        q.pop();

        // 2. jabotiyo kaaj shesh koro 
        v.push_back(front->val);

        // 3. children der k queue te push koro 
        if (front->left) q.push(front->left);
        if (front->right) q.push(front->right);
    }

    return v;
}


int main(void)
{
    

    return 0;
}