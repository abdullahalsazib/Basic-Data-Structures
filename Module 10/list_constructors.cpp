#include <bits/stdc++.h>
using namespace std;

int main()
{
     // list<int> myList;
     // cout << myList.size() << endl;

     // list <int> myList(10); //myList.size() == 10;
     // list<int> myList(10, 5);

     // for (auto ita = myList.begin(); ita != myList.end(); ita++)
     // {
     //      cout << *ita << " "; // 5 5 5 5 5 5 5 5 5 5
     // }

     // list <int> list2 = {1,2,3,4};
     // list<int> myList(10, 5);
     // list <int> myList(list2); //O(N)
     // for (auto ita = myList.begin(); ita != myList.end(); ita++)
     // {
     //      cout << *ita << " "; // 1 2 3 4
     // }

     // int ar[5] = {10, 20, 30, 40, 50};
     // list <int> myList(ar, ar + 5);
     // for(auto it = myList.begin(); it != myList.end(); it++)
     // {
     //      cout << *it << " "; // 10 20 30 40 50
     // }

     vector<int> v = {50, 60, 70, 80};

     list<int> myList(v.begin(), v.end());

     // for (auto it = myList.begin(); it != myList.end(); it++)
     // {
     //      cout << *it << " "; // 50 60 70 80
     // }
     for (int val : myList)
     {
          cout << val << " "; // 50 60 70 80
     }
     return 0;
}
