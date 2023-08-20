#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, q;
    cin>>n>>q;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr + n);

    int l = 0;
    int r = n - 1;
    bool flag = false;

    while (q > 0)
    {   
        int x;
        cin>>x;

        int l = 0;
        int r = n - 1;
        bool flag = false;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (arr[mid] == x)
            {
                flag = true;
                break;
            }

            if (arr[mid] > x) 
            {
                r = mid - 1;
            }
            else 
            {
                l = mid + 1;
            }
        }

        if (flag == true) cout<<"found\n";
        else cout<<"not found\n";

        q--;
    }

    return 0;
}