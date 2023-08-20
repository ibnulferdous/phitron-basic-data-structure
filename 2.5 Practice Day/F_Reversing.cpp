#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin>>n;

    vector<int> v(n);
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int end = n - 1;

    while (end >= 0)
    {
        ans.push_back(v[end]);
        end--;
    }
   
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}