#include <bits/stdc++.h>

using namespace std;



int main()
{
    // test case
    int t;
    cin>>t;

    for (int i =1; i <= t; i++)
    {   
        set<int> s;
        // n - number of inputs
        int n;
        cin>>n;

        for (int j = 0; j < n; j++)
        {
            int val;
            cin>>val;
            s.insert(val);
        }

        // reverse iterator to get the values in reverse order 
        for (auto rit = s.rbegin(); rit != s.rend(); rit++)
        {
            cout<<*rit<<" ";
        }
        cout<<endl;
    }

    return 0;
}


