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
int print_middle(Node *head);
void print_reverse(Node *head);

int main(void)
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {   
        cin>>val;
        if (val == -1) break;

        Node *n = new Node(val);

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

    print_middle(head);
    cout<<endl;

    return 0;
}

// Calculate size
int print_middle (Node *head)
{
    Node *temp = head;
    int size = 0, count = 1;

    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    int first_index = (size / 2);
    int second_index = (size / 2) + 1;

    temp = head;

    cout<<"Middle index is: ";

    while (temp != NULL)
    {
        if (size % 2 == 0 && first_index == count)
        {
            cout<<temp->val<<" ";
        }

        if (second_index == count)
        {
            cout<<temp->val;
        }

        temp = temp->next;
        count++;
    }

    return count;
}

// Printing recursive
void print_reverse (Node *head)
{   
    Node *temp = head;

    if (temp == NULL) return;

    cout<<temp->val<<" ";
    print_reverse(temp->next);
}