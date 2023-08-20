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
void print_level(Node* root, int level);

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

    // take level input
    cin>>level;
    
    print_level(root, level);

    return 0;
}

void print_level(Node* root, int level)
{
    if (!root) return;

    queue< pair<Node*, int> > q;
    int lvl = 0;

    q.push({root, lvl});

    // Loop to insert values into the vector
    while (!q.empty())
    {
        pair<Node*, int> pr = q.front();
        q.pop();

        Node* front = pr.first;
        lvl = pr.second;

        if (lvl == level)
        {
            cout<<front->val<<" ";
        }

        if (front->left) q.push({front->left, lvl + 1});
        if (front->right) q.push({front->right, lvl + 1});
    }

    if (level > lvl) cout<<"Invalid";
}

