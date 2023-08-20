#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;

    for (int i = 1; i <= t; i++)
    {
        map<int, int> mp;
        int n, max_count = 0, max_value = INT_MIN;
        cin>>n;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }

        for (auto i: mp)
        {
            if (i.second > max_count)
            {
                max_value = i.first;
                max_count = i.second;
            }
            else if (i.second == max_count)
            {
                if (i.first > max_value)
                {
                    max_value = i.first;
                }
            }
        }
        cout<<max_value<<" "<<max_count<<endl;
    }

    return 0;
}
