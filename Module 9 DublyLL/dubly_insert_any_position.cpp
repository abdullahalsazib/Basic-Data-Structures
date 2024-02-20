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
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
void print_dubly_rev(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
}
void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;     // 100 -> 30
    tmp->next = newNode;           // 20 -> 100
    newNode->next->prev = newNode; // 100 <- 30
    newNode->prev = tmp;           // 20 <-100
}
int linked_size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    int pos, val;
    cout << "Enter Position and Value : ";
    cin >> pos >> val;
    if (pos == 0)
    {
        cout << endl << ">>Invlade position!" <<endl << endl;
    }
    else if(pos >= linked_size(head))
    {
        cout << endl << ">>Invlade position!" << endl << endl;
    }
    else
    {
        insert_at_position(head, pos, val);
    }
    print_dubly_normal(head);
    cout << endl;
    print_dubly_rev(tail);

    return 0;
}
