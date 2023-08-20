#include <bits/stdc++.h>

using namespace std;


class Node
{
    public:
        int val;
        Node* next;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};

// Class for stack
class my_stack
{
    public:
        Node* head;
        int sz = 0;

        void push (int val)
        {
            Node* n = new Node(val);

            n->next = head;
            head = n;
            sz++;
        }

        void pop ()
        {
            if (head == NULL) return;
            Node* delete_node = head;
            head = head->next;
            delete delete_node;
            sz--;
        }

        int top ()
        {   
            return head->val;
        }

        int size ()
        {
            return sz;
        }

        bool empty ()
        {
            return sz == 0;
        }
};

// Class for Queue
class my_queue
{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push (int val)
        {
            Node* n = new Node(val);

            if (head == NULL)
            {
                head = n;
                tail = n;
            }
            else 
            {
                tail->next = n;
                tail = n; 
            }

            sz++;
        }

        void pop ()
        {
            if (head == NULL) return;
            Node* delete_node = head;
            head = head->next;
            delete delete_node;

            // If there was only one value in the queue, we have to assign tail to NULL
            if (head == NULL) tail = NULL; 

            sz--;
        }

        int front ()
        {
            if (head == NULL) return -1;
            else return head->val;
        }

        int size ()
        {
            return sz;
        }

        bool empty()
        {
            return sz == 0;
        }

};


int main()
{
    // Write your code here
    int n, m;
    cin>>n>>m;

    my_stack st;
    my_queue q;

    if (n != m)
    {
        cout<<"NO";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    while (!st.empty() && !q.empty())
    {
        int st_val = st.top();
        int q_val = q.front();

        if (st_val != q_val)
        {
            cout<<"NO";
            return 0;
        }

        st.pop();
        q.pop();
    }
    
    cout<<"YES";
    return 0;
}

