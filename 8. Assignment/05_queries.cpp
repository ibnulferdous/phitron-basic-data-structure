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

int main()
{
    // Write your code here
    int queries;
    Node *head = NULL;
    Node *tail = NULL;

    cin>>queries;

    for (int q = 1; q <= queries; q++)
    {
        int option, value;
        cin>>option>>value;

        Node *n = new Node(value);

        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else if (option == 0)
        {
            n->next = head;
            head = n;
        }
        else if (option == 1)
        {
            tail->next = n;
            tail = n;
        }

        cout<<head->val<<" "<<tail->val<<endl;
    } 

    return 0;
}
