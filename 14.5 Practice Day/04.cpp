#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    queue<int> q;
    stack<int> s;
    int n;

    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    while (!q.empty())
    {
        int val = q.front();
        s.push(val);
        q.pop();
    }
    
    while (!s.empty())
    {
        int val = s.top();
        q.push(val);
        s.pop();
    }

    while (!q.empty())
    {
        int val = q.front();
        cout<<val<<" ";
        q.pop();
    }

    return 0;
}