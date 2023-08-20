#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
        int val;
        Node* left;
        Node* right;

        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

// Function prototype
Node* input_tree();
int count_leaf(Node* root);

int main(void)
{
    Node* root = input_tree();
    cout<<count_leaf(root);

    return 0;
}

Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;

    if (val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;

    if (root) q.push(root);

    while (!q.empty())
    {
        // 1. queue theke ber koro and kono variable a save kore rakho
        Node* parent = q.front();
        q.pop();
        // 2. jabotiyo shob kaaj shesh koro
        int l, r;
        cin>>l>>r;

        if (l != -1) 
        {
            Node* left = new Node(l);
            parent->left = left;
        }

        if (r != -1) 
        {
            Node* right = new Node(r);
            parent->right = right;
        }

        // 3. Children der k queue te push kore dao
        if (parent->left) q.push(parent->left);
        if (parent->right) q.push(parent->right);
    }

    return root;
}

int count_leaf(Node* root)
{
    if (root == NULL) return 0;
    else if (root->left == NULL && root->right == NULL) return 1;
    else 
    {
        int left_count = count_leaf(root->left);
        int right_count = count_leaf(root->right);

        return left_count + right_count;
    }
}