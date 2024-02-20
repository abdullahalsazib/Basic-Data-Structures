#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st1;
    stack<int> st2;
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int a;
        cin >> a;
        st1.push(a);
        i++;
    }

    while (!st1.empty())
    {
        int k = st1.top();
        st1.pop();
        st2.push(k);
    }

    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }

    return 0;
}
