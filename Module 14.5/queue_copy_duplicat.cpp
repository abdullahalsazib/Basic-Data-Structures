#include <bits/stdc++.h>
using namespace std;
stack<int> copy_in_stack(queue <int> qu)
{
    stack <int>st;
    while(!qu.empty())
    {
        int k = qu.front();
        qu.pop();
        st.push(k);
    }
    return st;
}
int main()
{
    queue <int> qu;
    stack <int> st;
    queue <int> cp;
    int n;
    cin >>n;
    int i = 0;
    while(i < n)
    {
        int x;
        cin >>x;
        qu.push(x);
        i++;
    }
    st = copy_in_stack(qu);

    while(!st.empty())
    {
        cout << st.top()<< " ";
        st.pop();
    }
    
    return 0;
}
