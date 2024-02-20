#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node *next;  
};

int main()
{
    Node a, b;//create a node

    a.value = 10;
    b.value = 200;
    a.next = &b;
    b.next = NULL;
    cout << a.next->value<< endl; //10
    cout << a.next->next->value<< endl; // 200
    return 0;
}
