#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int size;
    cin>>size;

    vector<int> v_one;
    vector<int> v_two;

    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v_one.push_back(x);
    }
    
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v_two.push_back(x);
    }

    vector<int> ans(v_two);
    ans.insert(ans.begin() + size, v_one.begin(), v_one.end());

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}