#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    int sz = 0;
    void push(int val)
    {
        sz++;
        v.push_back(val);
    }
    void pop()
    {
        sz--;
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
bool stackCheck(myStack num1, int n, myStack num2, int m)
{
    bool flag = false;
    
        while (!num1.empty())
        {
           if(num1.top() != num2.top())
           {
                flag = false;
                break;
           }
           else
           {
             flag = true;
           }
            num1.pop();
            num2.pop();
    }
    return flag;
}
int main()
{
    myStack num1;
    myStack num2;
    int n;
    cout << "n";
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int a;
        cin >> a;
        num1.push(a);
        i++;
    }
    int m;
    cout <<"m";
    cin >> m;
    i = 0;
    while (i < m)
    {
        int a;
        cin >> a;
        num2.push(a);
        i++;
    }
    if( n != m) cout << "NO";
    else{

    bool flag = stackCheck(num1, n, num2, m);
    if(flag == true) cout << "YES";
    else cout<< "NO";
    } 

    return 0;
}
