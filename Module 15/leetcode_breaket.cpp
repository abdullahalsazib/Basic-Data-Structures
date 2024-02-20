#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "()";

    stack<char> st;
    bool flag = false;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == ']')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                flag = false;
            }
            else
            {
                if (c == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else if (c == '}' && st.top() == '{')
                {
                    st.pop();
                }
                else if (c == ']' && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    flag = false;
                }
            }
        }
    }
    if (st.empty())
    {
        flag = true;
    }

    if (flag == true)
        cout << "True";
    else
        cout << "False";

    return 0;
}