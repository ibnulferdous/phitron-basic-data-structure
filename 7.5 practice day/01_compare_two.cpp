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
void insert_node(Node *&head);
int list_size(Node *head);
void print_list(Node *head);

int main(void)
{
    Node *head_one = NULL;
    Node *head_two = NULL;

    insert_node(head_one);
    insert_node(head_two);

    int size_one = list_size(head_one);
    int size_two = list_size(head_two);

    if (size_one == size_two) cout<<"YES";
    else cout<<"NO";

    return 0;
}

// Inserting nodes
void insert_node(Node *&head)
{
    int value;

    while (true)
    {
        cin>>value;
        if (value == -1) break;

        Node *newNode = new Node(value);

        newNode->next = head;
        head = newNode;

    }
}

// Finding size
int list_size(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
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