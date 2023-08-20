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
void sort_list(Node *head);
int get_size(Node *head);
void print_middle(Node *head, int size);


int main()
{
    // Write your code here
    Node *head = NULL;
    int value, size;

    while(true)
    {
        cin>>value;
        if (value == -1) break;

        Node *n = new Node(value);
        n->next = head;
        head = n;
    }

    sort_list(head);
    size = get_size(head);
    print_middle(head, size);



    return 0;
}

void sort_list(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

int get_size(Node *head)
{
    int size = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

void print_middle(Node *head, int size)
{
    Node *temp = head;
    int count = 1;
    int even_only = size / 2;
    int mid_index = (size / 2) + 1;

    while (count <= mid_index)
    {
        if (size % 2 == 0 && count == even_only)
        {
            cout<<temp->val<<" ";
        }

        if (count == mid_index)
        {
            cout<<temp->val;
        }

        temp = temp->next;
        count++;
    }
}


