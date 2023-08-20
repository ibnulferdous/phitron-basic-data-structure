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

void insert_tail(Node *&list, int value);

int main(void)
{
    Node *list = NULL;
    int arr[101] = {0};
    int value;
    bool is_duplicate = false;

    while (true)
    {
        cin>>value;
        if (value == -1) break;
        insert_tail(list, value);
    }

    Node *temp = list;

    while (temp != NULL)
    {   
        arr[temp->val]++;
        temp = temp->next;
    }

    for (int i = 0; i < 101; i++)
    {
        if (arr[i] > 1) 
        {
            is_duplicate = true;
            break;
        }
    }

    if (is_duplicate) cout<<"YES";
    else cout<<"NO";

    return 0;
}

// Adding values
void insert_tail(Node *&list, int value)
{
    Node *n= new Node(value);
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


