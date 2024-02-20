#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++ )
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());

   
    int bin;
    cin >> bin;
    int l = 0, r = n - 1;
    bool flag = false;

    while(l <= r)
    {
        int mid_index = (l + r) / 2;
        if(v[mid_index] == bin)
        {
            flag = true;
            break;
        }
        
        if(bin > v[mid_index])
        {
            l = mid_index + 1;
        }
        else
        {
            r = mid_index - 1;
        }
    }
    if(flag == true){
        cout << bin << " " << "is found";
    }
    else
    {
        cout<< bin << " " << "is not found";
    }
    
    return 0;
}
