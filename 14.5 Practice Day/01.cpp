#include <bits/stdc++.h>

using namespace std;

class my_stack {
    public:
        list<int> l;

        void push(int val)
        {
            l.push_back(val);
        }

        void pop()
        {   
            l.pop_back();
        }

        int top()
        {
            return l.back();
        }

        int size()
        {
            return l.size();
        }

        bool empty()
        {
            return l.empty();
        }
};

// Function prototype
void push_values(int size, my_stack* &st);

int main(void)
{
    int m, n;
    my_stack* m_stack = new my_stack;
    my_stack* n_stack = new my_stack;

    cin>>m;
    push_values(m, m_stack);
    
    cin>>n;
    push_values(n, n_stack);

    if (m != n) 
    {
        cout<<"NO"<<endl;
        return 0;
    }

    while (!m_stack->empty())
    {
        if (m_stack->top() != n_stack->top()) 
        {   
            cout<<"NO"<<endl;
            return 0;
        }

        m_stack->pop();
        n_stack->pop();
    }

    cout<<"YES"<<endl;
    return 0;
}

void push_values(int size, my_stack* &st)
{
    for (int i = 1; i <= size; i++)
    {   
        int x;
        cin>>x;
        st->push(x);
        // cout<<st.top()<<endl;
    }
}