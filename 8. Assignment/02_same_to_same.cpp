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
int insert_node(Node *&head);

int main(void)
{
    Node *head_one = NULL;
    Node *head_two = NULL;

    bool flag = true;

    int size_one = insert_node(head_one);
    int size_two = insert_node(head_two);

    // Comparing size of two list
    if (size_one != size_two) 
    {
        cout<<"NO";
        return 0;
    }

    // If size of the two lists are same, comparing them value by value
    Node *temp_one = head_one;
    Node *temp_two = head_two;

    while (temp_one != NULL)
    {
        if (temp_one->val != temp_two->val)
        {
            flag = false;
            break;
        }

        temp_one = temp_one->next;
        temp_two = temp_two->next;
    }

    if (flag == false)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }

    return 0;
}

int insert_node(Node *&head)
{
    int value, size = 0;

    while (true)
    {
        cin>>value;
        if (value == -1) break;

        Node *n = new Node(value);

        n->next = head;
        head = n;

        size++;
    }

    return size;
}

// void print_list(Node *head)
// {
//     Node *temp = head;

//     if (temp == NULL) return;

//     cout<<temp->val<<" ";
//     print_list(temp->next);
// }


// 10 20 30 40 -1
// 10 20 30 40 -1

// YES or NO