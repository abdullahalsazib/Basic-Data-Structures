#include <bits/stdc++.h>
using namespace std;

int main()
{
     list<int> myList1 = {10, 20, 30};

     // push
     //  myList.push_back(100);
     //  myList.push_front(200);

     // pop
     //  myList.pop_front();
     //  myList.pop_back();

     // insert
     list<int> list2 = {1, 2};
     vector<int> v = {100, 200};
     //  myList.insert(next(myList.begin(),2), 100);
     // myList.insert(next(myList.begin(), 2), list2.begin(), list2.end());

     // erase
     // myList.erase(next(myList.begin(), 2));

     // replase
     //  list <int> myList = {10, 20, 30, 40, 50, 30, 20, 30};
     //  replace(myList.begin(), myList.end(), 30, 1000);

     // for (int val : myList)
     // {
     //      cout << val << " ";
     // }

     // find

     auto it = find(myList1.begin(), myList1.end(), 10);

     if (it == myList1.end())
     {
          cout << "Not Found" << endl;
     }
     else
     {
          cout << "Founded" << endl;
     }

     return 0;
}
