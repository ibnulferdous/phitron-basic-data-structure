#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, count = 0;
    cin>>n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(), v.end());
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + 1 == v[j])
            {
                count++;
                break;
            }
        }
    }

    cout<<count;

    return 0;
}