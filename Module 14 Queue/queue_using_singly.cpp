#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *dateteNode = head;
        head = head->next;
        delete dateteNode;
        if (head == NULL)
            tail = NULL;
    }
    int fornt()
    {
        return head->value;
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
