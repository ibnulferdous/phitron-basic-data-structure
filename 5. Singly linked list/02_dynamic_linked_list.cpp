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
    Node *head = new Node(795);
    Node *a = new Node(286);

    head->next = a;

    cout<<head->val<<endl;
    cout<<head->next->val<<endl;

    return 0;
}