#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    // cin.ignore();
    getchar();

    for (int i = 1; i <= t; i++)
    {
        int max_count = 0;
        map<string, int> mp;
        string sentence, word, m_key;
        getline(cin, sentence);
        stringstream ss(sentence);

        while (ss >> word)
        {
            mp[word]++;
            // cout<<word<<": "<<mp[word]<<endl;

            if (mp[word] > max_count) 
            {
                max_count = mp[word];
                m_key = word;
            }
        }
        cout<<m_key<<" "<<mp[m_key]<<endl;
    }


    return 0;
}
