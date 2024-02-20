#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3] = {10, 20, 30};
    vector<int> v;

    v.push_back(10);
    v.push_back(340);
    v.push_back(100);
    v.push_back(140);
    v.push_back(140);

    // v.clear();

    v.resize(2);
    v.resize(4, 100);
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // cout << v[0] << " " << v[1];

    return 0;
}
