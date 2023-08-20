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
    Node *list = NULL;

    for (int i = 0; i < 3; i++)
    {
        int x;
        cin>>x;
        Node *n = new Node(x);
        n->next = list;
        list = n;
    }

    Node *ptr = list;

    while (ptr != NULL)
    {
        cout<<ptr->val<<endl;
        ptr = ptr->next;
    }

    return 0;
}