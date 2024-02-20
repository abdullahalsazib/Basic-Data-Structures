#include <bits/stdc++.h>
using namespace std;
void fun(int * &p)
{
    p = NULL;
}
int main()
{
    int val = 10;

    int *p = &val;
    fun(p);
    cout << p<<endl;
    
    return 0;
}
