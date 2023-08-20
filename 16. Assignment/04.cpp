#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int t;
    cin>>t;

    for (int i = 1; i <= t; i++)
    {
        stack<char> st;
        string s;
        cin>>s;

        for (char c:s)
        {
            // If the input is 'A'
            if (c == 'A')
            {
                if (st.empty())
                {
                    st.push(c);
                }
                else
                {
                    if (st.top() == 'B')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(c);
                    }
                }
            }
            else
            {
                if (st.empty())
                {
                    st.push(c);
                }
                else
                {
                    if (st.top() == 'A')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(c);
                    }
                }
            }
        }

        if (st.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
