#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    // mp.insert({"sakib al hasan", 75});
    // mp.insert({"tamim ekbal", 55});
    // mp.insert({"samim", 73});
    // mp.insert({"abdullah", 15});

    mp["sakib"] = 100;
    mp["rakib"] = 50;
    mp["abdulah"] = 30;

    // cout << mp["sazib"] << endl;

    // if (mp.count("sazib"))
    // {
    //     cout << "assa" << endl;
    // }
    // else
    //     cout << "ni" << endl;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " "<< it->second << endl; // O(logN);
    }

    return 0;
}
