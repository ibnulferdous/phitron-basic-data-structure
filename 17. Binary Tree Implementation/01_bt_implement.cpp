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
void preorder(Node* root);
void postorder(Node* root);
void inorder(Node* root);

int main(void)
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);

    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;

    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder: ";
    postorder(root);
    cout<<endl;
    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;

    return 0;
}

// preorder: root -> left -> right
void preorder(Node* root)
{
    // Base case
    if (root == NULL) return;

    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

// postorder: left -> right -> root
void postorder(Node* root)
{
    // Base case
    if (root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

// Inorder: left -> root -> right
void inorder(Node* root)
{
    // Base case
    if (root == NULL) return;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}