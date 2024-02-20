#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    vector <int> a(n);
    vector <int> b(n);
   
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int c_Size = n + n;
    vector <int> c(c_Size);

    for(int i = 0; i < n; i++)
    {
        c[i] = b[i];
    }
    int i = n;

    for(int j = 0; j < n; j++)
    {
        c[i] = a[j];
        i++;
    }
    for(int i = 0; i < n + n; i++)
    {
        cout << c[i] << " ";
    }
   
    
    
    return 0;
}
