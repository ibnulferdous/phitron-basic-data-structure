#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

// Function initialization
void insert_node(Node* &head, Node* &tail, int pos, int val);
int list_size(Node* head);
void print_list(Node* head, Node* tail);

int main()
{
    // Write your code here
    Node* head = NULL;
    Node* tail = NULL;

    int queries, pos, val;
    cin>>queries;

    for (int i = 1; i <= queries; i++)
    {
        cin>>pos>>val;

        if (pos > list_size(head))
        {
            cout<<"Invalid"<<endl;
            continue;
        }

        insert_node(head, tail, pos, val);
        print_list(head, tail);
        
    }

    return 0;
}

void insert_node(Node* &head, Node* &tail, int pos, int val)
{
    Node* n = new Node(val);
    int size = list_size(head);


    if (pos == 0)
    {
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else 
        {
            n->next = head;
            head->prev = n;
            head = n;
        }
    }
    else if (pos == size)
    {
        tail->next = n;
        n->prev = tail;
        tail = n;
    }
    else 
    {
        Node* tmp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }

        n->next = tmp->next;
        tmp->next = n;
        n->next->prev = n;
        n->prev = tmp;
    }
}

int list_size(Node* head)
{
    Node* tmp = head;
    int size = 0;

    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }

    return size;
}

void print_list(Node* head, Node* tail)
{
    Node* tmp_head = head;
    Node* tmp_tail = tail;

    cout<<"L -> ";
    while (tmp_head != NULL)
    {
        cout<<tmp_head->val<<" ";
        tmp_head = tmp_head->next;
    }
    
    cout<<endl;

    cout<<"R -> ";
    while (tmp_tail != NULL)
    {
        cout<<tmp_tail->val<<" ";
        tmp_tail = tmp_tail->prev;
    }

    cout<<endl;
}