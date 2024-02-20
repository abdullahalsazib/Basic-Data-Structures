#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int prefix[n];
    prefix[0] = v[0];

    for(int i = 1; i < n;i++)
    {
        prefix[i] = v[i] + prefix[i - 1];
    }

    while(q--)
    {
        int l, r;
        cin>> l>> r;

        l--;//for index;
        r--;//for index;

        long long sum;

        if(l == 0)
        {
            sum = prefix[r] - 0;
        }
        else
        {
            sum = prefix[r]- prefix[l - 1];
        }

        cout << sum<< endl;

    }
    return 0;
}
