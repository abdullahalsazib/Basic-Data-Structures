#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {10, 20, 30};
    vector <int> x = {200,300, 400};
    // v.insert(v.begin() + 2, 200);
    v.insert(v.begin() + 0, x.begin(), x.end());
    for(int x:v)
    {
        cout << x << " ";
    }

    return 0;
}
