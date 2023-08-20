#include <bits/stdc++.h>

using namespace std;

class MyQueue {
public:
    stack<int> st;

    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> new_st;
        int last_value;

        while (!st.empty())
        {
            int value = st.top();
            st.pop();

            if (!st.empty()) new_st.push(value);
            else last_value = value;
        }

        while (!new_st.empty())
        {
            int value = new_st.top();
            new_st.pop();
            st.push(value);
        }

        return last_value;
    }
    
    int peek() {
        stack<int> new_st;
        int last_value;

        while (!st.empty())
        {
            last_value = st.top();
            st.pop();

            new_st.push(last_value);
        }

        while (!new_st.empty())
        {
            int value = new_st.top();
            new_st.pop();
            st.push(value);
        }

        return last_value;
    }
    
    bool empty() {
        return st.empty();
    }
};

int main(void)
{
    

    return 0;
}