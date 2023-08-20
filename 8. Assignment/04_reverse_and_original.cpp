#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
        int val;
        Node *next;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};

// Function initialization
void insert_node(Node *&head, Node *&tail);
void print_original(Node *head);
void print_reverse(Node *head);

int main()
{
    // Write your code here
    Node *head = NULL;
    Node *tail = NULL;

    insert_node(head, tail);
    print_reverse(head);
    cout<<endl;
    print_original(head);

    return 0;
}

void insert_node(Node *&head, Node *&tail)
{
    int value;

    while(true)
    {
        cin>>value;
        if (value == -1) break;

        Node *n = new Node(value);

        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else 
        {
            tail->next = n;
            tail = n;
        }
    }
}

void print_original(Node *head)
{
    Node *temp = head;

    if (temp == NULL) return;

    cout<<temp->val<<" ";
    print_original(temp->next);
}

void print_reverse(Node *head)
{
    Node *temp = head;

    if (temp == NULL) return;

    print_reverse(temp->next);
    cout<<temp->val<<" ";
}