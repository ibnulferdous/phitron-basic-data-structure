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

// Function Prototype
int tree_sum(Node* root);
// void print_tree(Node* root);

int main()
{
    // Write your code here
    int i;
    cin>>i;

    if (i == -1) return 0;

    Node* root = new Node(i);
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* front = q.front();
        q.pop();

        int l, r;
        cin>>l>>r;

        if (l != -1) 
        {
            front->left = new Node(l);
            q.push(front->left);
        }

        if (r != -1) 
        {
            front->right = new Node(r);
            q.push(front->right);
        }
    }

    int total = tree_sum(root);

    cout<<total;

    return 0;
}

int tree_sum(Node* root)
{
    if (!root) return 0;

    int l = 0;
    int r = 0;

    if (root->left) l = tree_sum(root->left);
    if (root->right) r = tree_sum(root->right);

    return l + r + root->val;
}

// void print_tree(Node* root)
// {
//     if (!root) return;

//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         Node* front = q.front();
//         q.pop();

//         cout<<front->val<<" ";

//         if (front->left) q.push(front->left);
//         if (front->right) q.push(front->right);
//     }

// }
