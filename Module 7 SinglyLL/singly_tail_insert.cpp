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
void print_linked_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << "[" << tmp->value << "]"
             << " ";
        tmp = tmp->next;
    }
}
int linked_size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert_linked(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_head_linked(Node *&head, int v)
{
    Node *newNode = new Node(v);

    newNode->next = head;
    head = newNode;
}
void insert_tail_linked(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d; // tail
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    // d = NULL

    cout << "Linked Size : " << linked_size(head) << endl;
    int pos, val;
    cout << "Enter Position : ";
    cin >> pos;
    cout << "Enter Value: ";
    cin >> val;
    if (pos > linked_size(head))
    {
        cout << "Invalid Possition " << endl;
    }
    else if (pos == 0)
    {
        insert_head_linked(head, val);
    }
    else if (pos == linked_size(head))
    {
        insert_tail_linked(head, tail, val);
    }
    else
    {
        insert_linked(head, pos, val);
    }
    print_linked_list(head);

    return 0;
}
