#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
     list<int> l;
     void push(int val)
     {
          l.push_back(val);
     }
     void pop()
     {
          l.pop_back();
     }
     int top()
     {
          return l.back();
     }
     int size()
     {
          return l.size();
     }
     bool empty()
     {
          if (l.size() == 0)
               return true;
          else
               return false;
     }
};
int main()
{
     myStack ls;
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
     {
          int x;
          cin >> x;
          ls.push(x);
     }

     cout << "your data size is: " << ls.size() << endl;

     while (!ls.empty())
     {
          cout << ls.top() << endl;
          ls.pop();
     }

     return 0;
}
