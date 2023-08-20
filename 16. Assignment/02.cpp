#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int n, m;
    cin>>n>>m;

    stack<int> st;
    queue<int> q;

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
