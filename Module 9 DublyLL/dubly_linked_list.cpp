#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node *next;
        Node *prev;
        Node(int value)
        {
            this->value = value;
            this->next = NULL;
            this->prev = NULL;
        }
};
void print_dubly_normal(Node *head)
{
    Node *tmp = head;
    while(tmp!= NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
void print_dubly_rev(Node *tail)
{
    Node *tmp = tail;
    while(tmp!= NULL)
    {
        cout << tmp->value << " " ;
        tmp = tmp->prev;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    print_dubly_normal(head);
    cout << endl;
    print_dubly_rev(tail);
    
    return 0;
}
