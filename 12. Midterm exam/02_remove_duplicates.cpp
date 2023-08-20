#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    list<int> m_list;
    int val;

    while (true)
    {
        cin>>val;
        if (val == -1) break;

        m_list.push_back(val);
    }

    m_list.sort();
    m_list.unique();

    for (int i: m_list)
    {
        cout<<i<<" ";
    }

    return 0;
}
