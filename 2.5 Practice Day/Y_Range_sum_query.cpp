#include <bits/stdc++.h>

using namespace std;

int main(void)
{   
    int n, q;
    cin>>n>>q;

    vector<int> v(n);
    vector<long long> ans(n);

    for (int i = 0; i < n; i++) 
    {
        cin>>v[i];
    }

    ans[0] = v[0];
    
    for (int i = 1; i < n; i++) 
    {
        ans[i] = ans[i - 1] + v[i];
    }

    while (q > 0)
    {
        int l, r;
        cin>>l>>r;

        l--;
        r--;
        q--;

        if (l == 0) cout<<ans[r]<<endl;
        else cout<<(ans[r] - ans[l - 1])<<endl;
    }   

    return 0;
}