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
void print_reverse(Node* root);

int main()
{
    // Write your code here
    int i;
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

    print_reverse(root);

    return 0;
}

void print_reverse(Node* root)
{
    if (!root) return;

    queue<Node*> q;
    vector<int> v;

    q.push(root);

    // Loop to insert values into the vector
    while (!q.empty())
    {
        Node* front = q.front();
        q.pop();

        v.push_back(front->val);

        if (front->right) q.push(front->right);
        if (front->left) q.push(front->left);
    }

    // reverse the values
    reverse(v.begin(), v.end());

    // print the vector values
    for (int i : v)
    {
        cout<<i<<" ";
    }
}

