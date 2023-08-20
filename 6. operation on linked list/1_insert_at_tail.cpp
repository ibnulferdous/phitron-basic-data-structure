#include <bits/stdc++.h>

using namespace std;

// Class declaration
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

// Function declaration
void head_insert(Node *&list, int value);
void position_insert (Node *&list, int position, int value);
void tail_insert(Node *&list, int value);
void print_list(Node *list);
void delete_from_position (Node *&list, int position);

int main(void)
{
    Node *list = NULL;

    while (true)
    {   
        int option;

        cout<<"Press 1: Insert at head"<<endl;
        cout<<"Press 2: Insert at tail"<<endl;
        cout<<"Press 3: Insert at any position"<<endl;
        cout<<"Press 4: Print values"<<endl;
        cout<<"Press 5: Delete node"<<endl;
        cout<<"Press 6: Close"<<endl;
        
        cout<<endl;

        cout<<"Insert option: ";
        cin>>option;
        cout<<endl;

        if (option == 1)
        {   
            int value;
            cout<<"Insert value: ";
            cin>>value;
            cout<<endl;
            head_insert(list, value);
        }
        else if (option == 2)
        {   
            int value;
            cout<<"Insert value: ";
            cin>>value;
            cout<<endl;
            tail_insert(list, value);
        }
        else if (option == 3)
        {
            int position, value;
            cout<<"Insert position: ";
            cin>>position;
            cout<<"Insert value: ";
            cin>>value;
            cout<<endl;
            if (position == 0)
            {
                head_insert(list, value);
            }
            else 
            {
                position_insert (list, position, value);
            }
        }
        else if (option == 4)
        {
            print_list(list);
        }
        else if (option == 5)
        {
            int position;
            cout<<"Insert position: ";
            cin>>position;
            cout<<endl;
            delete_from_position(list, position);
        }
        else if (option == 6)
        {
            break;
        }
        
    }    

    return 0;
}

// Insert value at head
void head_insert(Node *&list, int value)
{
    Node *n = new Node(value);
    n->next = list;
    list = n;
}

// Insert value at any position
void position_insert (Node *&list, int position, int value)
{
    Node *n = new Node(value);
    Node *temp = list;

    for (int i = 1; i < position; i++)
    {
        temp = temp->next;
    }

    n->next = temp->next;
    temp->next = n;
}

// Insert value at tail
void tail_insert(Node *&list, int value)
{
    Node *n = new Node(value);
    Node *temp = list;

    // If the list is empty
    if (list == NULL)
    {
        list = n;
        return;
    }

    // Looping on temp for the last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Connecting the last node
    temp->next = n;
}

// Print linked list
void print_list(Node *list)
{
    Node *temp = list;

    cout<<"-----------------------------------------------------\n";
    cout<<"Values in the linked list: ";

    while (temp != NULL)
    {
        cout<<temp->val<<" ";

        temp = temp->next;
    }

    cout<<endl;
    cout<<"-----------------------------------------------------";
    cout<<endl<<endl;
}

// Delete from the list
void delete_from_position (Node *&list, int position)
{
    Node *temp = list;

    if (position == 0)
    {
        list = list->next;
        delete temp;
    }
    else 
    {
        for (int i = 1; i < position; i++)
        {
            temp = temp->next;
        }

        Node *delete_node = temp->next;
        temp->next = temp->next->next;

        delete delete_node;
    }    
}