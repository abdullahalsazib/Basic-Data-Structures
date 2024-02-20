#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1;

        // binary search;
        while (l <= r)
        {
            int mid_index = (l + r) / 2;
            if(a[mid_index] == x)
            {
                flag = true;
                break;
            }
            if(x > a[mid_index])
            {
                //dan
                l = mid_index + 1;
            }
            else
            {
                //bam;
                r = mid_index - 1;
            }
        }

        (flag == true) ? cout << "Found" << endl : cout << "Not Found" << endl;
    }

    return 0;
}
