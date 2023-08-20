#include <bits/stdc++.h>

using namespace std;

class Node 
{
    public:
        int value;
        Node *next;

        Node(int value)
        {
            this->value = value;
            this->next = NULL;
        }
};

// Function declaration
void insert_at_tail(Node *&list, int value);
void print_list(Node *list);

int main(void)
{   
    Node *list = NULL;
    int value, count = 0;

    while (true)
    {   
        cin>>value;
        if (value == -1) break;
        insert_at_tail(list, value);
    }

    Node *temp = list;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    
    cout<<"Total values in the list: "<<count;

    return 0;
}

// Insert values at the end
void insert_at_tail(Node *&list, int value)
{
    Node *n = new Node(value);
    Node *temp = list;

    if (list == NULL)
    {
        list = n;
        return;
    }
   
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;

}

// Print linked list
void print_list(Node *list)
{
    Node *temp = list;

    cout<<"Value are: ";

    while (temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}

// 2 1 5 3 4 8 9 -1
// 5 1 4 5 -1