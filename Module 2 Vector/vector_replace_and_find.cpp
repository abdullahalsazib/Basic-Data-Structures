#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector <int> v = {1,2,3,2,4,2,5,6};

    // replace(v.begin(), v.end(), 2, 100);

    // for(int x: v)
    // {
    //     cout << x<< " ";
    // }

    // find
    vector<int> v = {1, 2, 3, 2, 4, 2, 5, 6};

    // vector<int>::iterator it;
    auto it = find(v.begin(), v.end(), 10);
    // cout << *it;
    if(it == v.end()) cout << "NOT found";
    else cout << "Found";

    return 0;
}
