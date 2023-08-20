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

// Globbal variable
int max_val = INT_MIN, min_val = INT_MAX;

// Function prototype
void find_min_max_leaf(Node* root);

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

    find_min_max_leaf(root);

    cout<<max_val<<" "<<min_val;

    return 0;
}

void find_min_max_leaf(Node* root)
{
    if (!root) return;

    if (!root->left && !root->right)
    {
        max_val = max(max_val, root->val);
        min_val = min(min_val, root->val);
        return;
    }

    find_min_max_leaf(root->left);
    find_min_max_leaf(root->right);
}
