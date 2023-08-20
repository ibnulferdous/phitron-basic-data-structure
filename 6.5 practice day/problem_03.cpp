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

void print_middle(Node *list);

int main(void)
{
    Node *list = NULL;
    int value;

    while (true)
    {   
        cin>>value;
        if (value == -1) break;

        Node *n = new Node(value);

        if (list == NULL)
        {
            list = n;
        }
        else
        {
            n->next = list;
            list = n;
        }
    }

    print_middle(list);

    return 0;
}

void print_middle(Node *list)
{
    int count = 0, counter = 0;

    Node *temp = list;

    while (temp != NULL)
    {   
        cout<<temp->val<<" ";
        temp = temp->next;
        count++;
    }

    int first_index = (count / 2) - 1;
    int second_index = count / 2;

    cout<<endl;
    // cout<<count;
    cout<<endl;
    cout<<endl;

    temp = list;

    cout<<"Middle element(s): ";

    while (counter <= second_index)
    {
        if (count % 2 == 0 && counter == first_index) cout<<temp->val<<" ";
        if (counter == second_index) cout<<temp->val;

        temp = temp->next;
        counter++;
    }
}