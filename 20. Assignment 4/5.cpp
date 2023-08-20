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

// Global variable
int node_count = 0;

// Function prototype
int max_height(Node* root);

int main()
{
    // Write your code here
    int i, level;
    cin>>i;

    if (i == -1) return 0;

    Node* root = new Node(i);
    queue<Node*> q;
    q.push(root);

    // Loop to take input and insert into the tree
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

    int max_h = max_height(root);
    int total_nodes = pow(2, max_h) - 1;

    if (node_count == total_nodes) cout<<"YES";
    else cout<<"NO";

    return 0;
}

int max_height(Node* root)
{
    if (!root) return 0;

    // Updating the global node count variable
    node_count++;

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

