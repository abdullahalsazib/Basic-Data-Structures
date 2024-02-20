#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1,2,3,4,5,6};

    // cout <<v.back()<<endl;
    // cout << v.front()<<endl;


    // vector <int>::iterator it;
    // auto it

    for( auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
