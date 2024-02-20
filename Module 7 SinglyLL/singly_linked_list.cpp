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
void print_linked(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = new Node(5);
    Node *a = new Node(10);
    Node *b = new Node(20);

    head->next = a;
    a->next = b;

    print_linked(head);

    return 0;
}
