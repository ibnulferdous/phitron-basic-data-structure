#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
        string name;
        Node* next;
        Node* prev;

        Node(string name)
        {
            this->name = name;
            this->next = NULL;
            this->prev = NULL;
        }
};

// Function initialization
void insert_tail(Node* &head, Node* &tail, string input);
void search_address(Node* head, Node* &curr, string command, string address);

int main()
{
    // Write your code here
    Node* head = NULL;
    Node* tail = NULL;

    int query;

    string input, command, address;

    while (true)
    {
        cin>>input;

        if (input.compare("end") == 0) break;

        insert_tail(head, tail, input);
    }

    cin>>query;
    Node* curr = head;

    for (int i = 1; i <= query; i++)
    {
        cin>>command;

        if (command.compare("visit") == 0)
        {
            cin>>address;
        }

        search_address(head, curr, command, address);
    }


    return 0;
}

void insert_tail(Node* &head, Node* &tail, string input)
{
    Node* n = new Node(input);

    if (head == NULL)
    {
        head = n;
        tail = n;
    }
    else 
    {
        tail->next = n;
        n->prev = tail;
        tail = n;
    }
}

void search_address(Node* head, Node* &curr, string command, string address)
{
    Node* tmp = head;

    if (command.compare("visit") == 0)
    {
        while (tmp != NULL)
        {
            if (address.compare(tmp->name) == 0)
            {
                curr = tmp;
                cout<<curr->name<<endl;
                return;
            }

            tmp = tmp->next;
        }

        cout<<"Not Available"<<endl;
    }
    else if (command.compare("prev") == 0)
    {
        if (curr->prev != NULL)
        {
            curr = curr->prev;
            cout<<curr->name<<endl;
        }
        else 
        {
            cout<<"Not Available"<<endl;
        }
    }
    else 
    {
        if (curr->next != NULL)
        {
            curr = curr->next;
            cout<<curr->name<<endl;
        }
        else 
        {
            cout<<"Not Available"<<endl;
        }
    }
}

