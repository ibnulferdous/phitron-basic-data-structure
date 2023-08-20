#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int m, n;
    stack<int> s;
    queue<int> q;

    cin>>m;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }

    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    if (m != n)
    {
        cout<<"NO";
        return 0;
    }

    while (!s.empty())
    {
        int s_val = s.top();
        int q_val = q.front();

        if (s_val != q_val) 
        {
            cout<<"NO";
            return 0;
        }

        s.pop();
        q.pop();
    }

    cout<<"YES";
    return 0;
}