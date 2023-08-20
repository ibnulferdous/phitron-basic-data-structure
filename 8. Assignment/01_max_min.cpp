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

int main(void)
{
    Node *head = NULL;
    int value, min = INT_MAX, max = INT_MIN;

    while (true)
    {   
        cin>>value;
        if (value == -1) break;

        Node *n = new Node(value);

        n->next = head;
        head = n;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val < min) min = temp->val;
        if (temp->val > max) max = temp->val;

        temp = temp->next;
    }

    cout<<max<<" "<<min;

    return 0;
}

// 2 4 1 5 3 6 -1
// 6 1