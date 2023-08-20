#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin>>n;

    bool flag = false;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr + n);
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] == arr[i]) 
        {   
            flag = true;
            break;
        }
    }

    if (flag == true) cout<<"YES";
    else cout<<"NO";

    return 0;
}