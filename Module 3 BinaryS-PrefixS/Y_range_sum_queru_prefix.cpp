#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int prefix[n];
    prefix[0] = ar[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = ar[i] + prefix[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long sum;
        if (l == 0)
            sum = prefix[r] - 0;
        else
            sum = prefix[r] - prefix[l - 1];
        cout << sum << endl;
    }

    return 0;
}
