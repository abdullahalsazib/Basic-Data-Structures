#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st, ct;
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int x;
        cin >> x;
        st.push(x);
        i++;
    }
    int target;
    cout << "Target: ";
    cin >> target;

    while (!st.empty())
    {
        int k = st.top();
        st.pop();
        ct.push(k);
    }
    ct.push(target);

    while (!ct.empty())
    {
        cout << ct.top() << " ";
        ct.pop();
    }

    return 0;
}