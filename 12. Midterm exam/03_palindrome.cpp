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
void insert_at_tail (Node* &head, Node* &tail, int val);
void reverse_list (Node* &head, int val);

int main()
{
    // Write your code here
    Node* head = NULL;
    Node* tail = NULL;
    Node* new_head = NULL;
    int val;
    
    while (true)
    {
        cin>>val;
        if (val == -1) break;

        insert_at_tail(head, tail, val);
    }

    Node* tmp = head;

    while (tmp != NULL)
    {
        reverse_list(new_head, tmp->val);
        tmp = tmp->next;
    }

    tmp = head;
    Node* new_tmp = new_head;

    while (tmp != NULL)
    {
        if (tmp->val != new_tmp->val)
        {
            cout<<"NO";
            return 0;
        }

        tmp = tmp->next;
        new_tmp = new_tmp->next;
    }

    cout<<"YES";

    return 0;
}

void insert_at_tail (Node* &head, Node* &tail, int val)
{
    Node* n = new Node(val);

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

void reverse_list (Node* &head, int val)
{
    Node* n = new Node(val);

    if (head == NULL)
    {
        head = n;
    }
    else 
    {
        n->next = head;
        head = n;
    }
}

