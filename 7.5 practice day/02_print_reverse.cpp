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

void print_list(Node *head);
void print_reverse(Node *head);

int main(void)
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;

    while (true)
    {
        cin>>value;

        if (value == -1) break;

        Node *newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // print_list(head);
    print_reverse(head);

    return 0;
}

// Printing values
void print_list(Node *head)
{
    Node *temp = head;

    cout<<"Values are: ";

    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// Printing reverse
void print_reverse(Node *head)
{   
    Node *temp = head;
    if (temp == NULL) return;
    print_reverse(temp->next);
    cout<<temp->val<<" ";
}