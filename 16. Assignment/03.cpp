#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int t, command;
    queue<string> q;

    cin>>t;

    for (int i = 0; i < t; i++)
    {
        string name;
        cin>>command;

        if (command == 0)
        {
            cin>>name;
            q.push(name);
        }
        else
        {
            if (!q.empty())
            {
                cout<<q.front()<<endl;
                q.pop();
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
        }
    }

    return 0;
}
