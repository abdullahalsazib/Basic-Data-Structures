#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> q;
    int n;
    cin>> n;
    int i= 0;
    while(i < n)
    {
        int a;
        cin >> a;
        q.push(a);
        i++;
    }
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
