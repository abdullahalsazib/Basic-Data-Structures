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
void print_recursion(Node *n)
{
    if (n == NULL)
        return;

    print_recursion(n->next);
    cout << n->value << " ";
}
void print_linked(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
void print_rev(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    print_rev(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    print_rev(head, head);
    print_linked(head);
    // print_recursion(head);

    return 0;
}
