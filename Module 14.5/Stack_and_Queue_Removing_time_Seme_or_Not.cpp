#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> que;
    int n, m; // n for stack size and m for queue size;
    cout << "Stack n: ";
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int a;
        cin >> a;
        st.push(a);
        i++;
    }
    cout << "Queue m: ";
    cin >> m;
    i = 0;
    while (i < m)
    {
        int a;
        cin >> a;
        que.push(a);
        i++;
    }

    if (n != m)
    {
        cout << "NO";
        
    }
    else
    {
        bool flag = false;

        while (!st.empty())
        {
            if (st.top() != que.front())
            {
                flag = false;
                break;
            }
            else
            {
                flag = true;
            }
            st.pop();
            que.pop();
        }
        if (flag == true)
            cout << "YES";
        else
            cout << "NO";
    }
    


    return 0;
}
