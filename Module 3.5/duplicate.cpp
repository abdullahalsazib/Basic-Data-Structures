#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        ma = max(ma, v[i]);
    }

    int cnt[ma + 1] = {0};
    

    for (int i = 0; i < n; i++)
    {
        cnt[v[i]]++;
    }

    bool ans = false;
   
    for (int i = 1; i <= ma; i++)
    {
        if (cnt[i] != 0 && cnt[i] != 1)
            ans = true;
    }


    if (ans == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
