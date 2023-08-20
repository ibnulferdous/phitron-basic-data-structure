#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int t;
    cin>>t;

    

    while (t > 0)
    {   
        int n;
        cin>>n;

        int arr[n];
        bool is_sorted = true;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                is_sorted = false;
                break;
            }
        }

        if (is_sorted) cout<<"YES\n";
        else cout<<"NO\n";

        t--;
    }

    return 0;
}
