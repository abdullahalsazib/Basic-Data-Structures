#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);

        for(int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        bool ans = false;
        for(int i = 0; i < n - 1;i++)
        {
            for(int j = i + 1; j < n;j++)
            {
                if(v[i] >= v[j])
                {
                    ans = true;
                }
                else
                {
                    ans = false;
                }
            }
        }
        if(ans != true) cout << "Yes"<<endl;
        else cout << "No"<< endl;
    }
    
    return 0;
}
