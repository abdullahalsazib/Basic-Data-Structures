#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    s = "a#c";
    t = "b";

    stack<char> s1;
    stack<char> s2;

    for (char c : s)
    {
        if (c == '#')
        {
            if (!s1.empty())
                s1.pop();
           
        } else
                s1.push(c);
    }
    for (char c : t)
    {
        if (c == '#')
        {
            if (!s2.empty())
                s2.pop();
           
        } else
                s2.push(c);
    }
    if (s1 == s2)
        cout << "True";
    else
        cout << "False";

    return 0;
}