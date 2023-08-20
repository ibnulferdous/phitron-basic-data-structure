#include <bits/stdc++.h>

using namespace std;


int main()
{
    // Write your code here
    int t;
    cin>>t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        string s;
        stack<char> st;
        stack<char> cp_st;
        cin>>n;
        cin>>s;

        for (char c:s)
        {   
            // if stack is empty, push that color and skip rest of the code
            if (st.empty()) 
            {
                st.push(c);
                continue;
            }

            // If the top color is same as input, remove that top color from the stack and skip rest of the code
            if (st.top() == c) 
            {
                st.pop();
                continue;
            }

            if (c == 'R')
            {
                if (st.top() == 'B')
                {
                    st.pop();
                    
                    if (!st.empty() && st.top() == 'P')
                    {
                        st.pop();
                        continue;
                    }

                    st.push('P');
                }
                else if (st.top() == 'G')
                {
                    st.pop();

                    if (!st.empty() && st.top() == 'Y')
                    {
                        st.pop();
                        continue;
                    }

                    st.push('Y');
                }
                else 
                {
                    st.push('R');
                }
            }
            else if (c == 'B')
            {
                if (st.top() == 'R')
                {
                    st.pop();

                    if (!st.empty() && st.top() == 'P')
                    {
                        st.pop();
                        continue;
                    }

                    st.push('P');
                }
                else if (st.top() == 'G')
                {
                    st.pop();
                    
                    if (!st.empty() && st.top() == 'C')
                    {
                        st.pop();
                        continue;
                    }

                    st.push('C');
                }
                else 
                {
                    st.push('B');
                }
            }
            else
            {
                if (st.top() == 'R')
                {
                    st.pop();

                    if (!st.empty() && st.top() == 'Y')
                    {
                        st.pop();
                        continue;
                    }

                    st.push('Y');
                }
                else if (st.top() == 'B')
                {
                    st.pop();

                    if (!st.empty() && st.top() == 'C')
                    {
                        st.pop();
                        continue;
                    }
                    
                    st.push('C');
                }
                else 
                {
                    st.push('G');
                }
            }
        }

        while (!st.empty())
        {
            cp_st.push(st.top());
            st.pop();
        }
        
        while (!cp_st.empty())
        {
            cout<<cp_st.top();
            cp_st.pop();
        }

        cout<<endl;
    }

    return 0;
}
