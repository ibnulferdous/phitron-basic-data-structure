#include <bits/stdc++.h>

using namespace std;



int main()
{
    priority_queue< int, vector<int>, greater<int> > pq;
    int n, q;
    cin>>n;

    while (n > 0)
    {
        int x;
        cin>>x;
        pq.push(x);
        n--;
    }

    cin>>q;

    while (q > 0)
    {
        int command;
        cin>>command;

        if (command == 0)
        {
            // insert value
            int x;
            cin>>x;
            pq.push(x);
            cout<<pq.top()<<endl;
        }
        else if (command == 1)
        {
            // print the minimum value 
            if (pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top()<<endl;
        }
        else if (command == 2)
        {
            // delete the minimum value and print the current min value
            if (!pq.empty()) pq.pop();
            
            if (pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top()<<endl;
        }

        q--;
    }

    return 0;
}
