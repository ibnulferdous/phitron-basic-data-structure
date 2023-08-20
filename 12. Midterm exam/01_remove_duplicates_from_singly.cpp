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
void insert_at_head(Node* &head, int val);
void sort_list(Node* head);
void remove_duplicates(Node* head);
void print_list (Node* head);

int main()
{
    // Write your code here
    Node* head = NULL;
    int val;
    
    while (true)
    {
        cin>>val;
        if (val == -1) break;

        insert_at_head(head, val);
    }

    sort_list(head);
    remove_duplicates(head);
    print_list(head);

    return 0;
}

void insert_at_head (Node* &head, int val)
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

void sort_list(Node* head)
{
    Node* tmp = head;

    for (Node* i = head; i != NULL; i = i->next)
    {
        for (Node* j = i->next; j != NULL; j = j->next)
        {
            if(i->val > j->val) swap(i->val, j->val);
        }
    }
}

void remove_duplicates(Node* head)
{
    Node* tmp = head;

    while (tmp->next != NULL)
    {
        if (tmp->val == tmp->next->val)
        {
            Node* delete_node = tmp->next;
            tmp->next = tmp->next->next;
            delete delete_node;
        }

        if (tmp->next == NULL) break;
        else if (tmp->val != tmp->next->val) tmp = tmp->next;
    }
}

void print_list (Node* head)
{
    Node* tmp = head;

    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}


