#include <bits/stdc++.h>
using namespace std;

int main()
{

    string sentence;
    getline(cin, sentence);

    string word;
    stringstream ss(sentence);

    map<string, int> mp;

    while (ss >> word)
    {
        mp[word]++;
    }
    // for(auto it=mp.begin(); it!=mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    if (mp["abdullah"] == 0)
    {
        cout << "ni" << endl;
    }
    else
        cout << mp["abdullah"] << endl;
    return 0;
}
