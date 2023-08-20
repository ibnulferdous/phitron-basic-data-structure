#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char c;
    string s;
    int length;

    vector<int> v(26);

    cin>>s;

    length = s.length();

    for (int i = 0; i < length; i++)
    {
        int value = s[i] - 'a';

        v[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (v[i] > 0)
        {
            char c = i + 'a';
            cout<<c<<" : "<<v[i]<<endl;
        }
    }



    

    return 0;
}