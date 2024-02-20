#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin >> n;//vector size;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1; //curren-index;

        while (cur_idx != 0)
        {
            int parent_idx = (cur_idx - 1) / 2;//parent-index;

            if (v[parent_idx] > v[cur_idx])
                swap(v[parent_idx], v[cur_idx]);//swaping;
            else
                break;
            cur_idx = parent_idx; //update cur_idx;
        }
    }
    for (int ele : v)
    {
        cout << ele << " ";//print the output
    }

    return 0;
}
