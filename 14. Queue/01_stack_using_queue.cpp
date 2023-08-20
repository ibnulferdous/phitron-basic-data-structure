#include <bits/stdc++.h>

using namespace std;

class MyStack {
public:
    queue<int> q;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int> new_q;
        int last_value;

        while (!q.empty())
        {
            int value = q.front();
            q.pop();

            if (!q.empty()) new_q.push(value);
            else last_value = value;
        } 

        q = new_q;
        return last_value;
    }
    
    int top() {
        queue<int> new_q;
        int last_value;

        while (!q.empty())
        {
            last_value = q.front();
            q.pop();

            new_q.push(last_value);
        } 

        q = new_q;
        return last_value;
    }
    
    bool empty() {
        return q.empty();
    }
};

int main(void)
{
    

    return 0;
}