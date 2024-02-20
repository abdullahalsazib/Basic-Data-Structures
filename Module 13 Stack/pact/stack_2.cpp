#include <bits/stdc++.h>
using namespace std;

int main()
{
     stack<string> s;
     int n;
     cin >> n;
     int i = 0;
     while (i < n)
     {
          string val;
          cin >> val;
          s.push(val);
          i++;
     }
     for(int i = 0;i < n;i++)
     {
          cout << s.top()<< endl;
          s.pop();
     }

     return 0;
}
