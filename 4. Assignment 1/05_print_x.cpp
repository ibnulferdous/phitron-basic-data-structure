#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n;
    cin>>n;

    int mid = (n - 1) / 2;


    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            if (r == mid && c == mid)
            {
                cout<<"X";
            }
            else if (r == c)
            {
                cout<<"\\";
            }
            else if (r + c == n - 1)
            {
                cout<<"/";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
