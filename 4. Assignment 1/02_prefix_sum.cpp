#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n, m = 1;
    cin>>n;

    int arr[n];
    long long pre_sum[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    pre_sum[n - 1] = arr[0];
    cout<<pre_sum[n - 1]<<endl;

    for (int i = n - 2; i >= 0; i--)
    {
        pre_sum[i] = pre_sum[i + 1] + arr[m];
        m++;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<pre_sum[i]<<" ";
    }


    return 0;
}
