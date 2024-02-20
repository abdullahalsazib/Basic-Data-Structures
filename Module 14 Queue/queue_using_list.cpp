#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list <int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
       l.pop_front();
    }
    int fornt()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        // if (l.size() == 0)
        //     return true;
        // else
        //     return false;
        return l.empty();
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int x;
        cin >> x;
        q.push(x);
        i++;
    }

    while (!q.empty())
    {
        cout << q.fornt() << " ";
        q.pop();
    }

    return 0;
}
