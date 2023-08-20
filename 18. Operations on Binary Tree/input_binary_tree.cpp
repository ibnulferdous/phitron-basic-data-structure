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
void level_order_print(Node* root);

int main(void)
{
    Node* root = input_tree();
    level_order_print(root);

    return 0;
}

Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;

    // if the root is empty(-1), set NULL to root
    if (val == -1) root = NULL;
    // If there is value, create a new Node with that value and assign it to root
    else root = new Node(val);

    queue<Node*> q;

    // If root has value, push it to q
    if (root) q.push(root);

    while (!q.empty())
    {   
        // 1. queue theke ber koro and kothao save kore rakho
        Node* parent = q.front();
        q.pop();

        // 2. jabotio shob kaaj shesh koro
        int l, r;
        cin>>l>>r;

        // if left and right has values, create new Node with values
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

        // 3. children der k queue te push kore dao
        // First check, if parent left or right is not NULL and then push it to q
        if (parent->left) q.push(parent->left);
        if (parent->right) q.push(parent->right);
    }

    return root;
}

void level_order_print(Node* root)
{
    if (!root) return;

    queue<Node*> q;

    q.push(root);

    while (!q.empty())
    {
        // 1. Queue theke ber koro and kothao save kore rakho
        Node* front = q.front();
        q.pop();

        // 2. Jabotio shob kaaj shesh koro
        cout<<front->val<<" ";

        // 3. children der k queue te push kore dao
        if (front->left) q.push(front->left);
        if (front->right) q.push(front->right);

    }

}