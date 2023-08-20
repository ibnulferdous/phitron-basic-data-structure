#include <bits/stdc++.h>

using namespace std;

// Function prototype
void print_reverse(stack<int> s);

int main(void)
{
    stack<int> s;
    stack<int> s_copy;
    int n;

    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }

    // Print by recursion
    print_reverse(s);

    // while (!s.empty())
    // {
    //     int top_value = s.top();
    //     s_copy.push(top_value);
    //     s.pop();
    // }
    
    // while (!s_copy.empty())
    // {
    //     cout<<s_copy.top()<<" ";
    //     s_copy.pop();
    // }


    return 0;
}

void print_reverse(stack<int> s)
{   
    if (s.empty()) return;

    int val = s.top();
    s.pop();
    print_reverse(s);
    cout<<val<<" ";
}