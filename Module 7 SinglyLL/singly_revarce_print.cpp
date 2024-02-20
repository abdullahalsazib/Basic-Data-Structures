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
void input_linked_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_recartion(Node *n)
{
    if (n == NULL)
        return;
    print_recartion(n->next);
    cout << n->value << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        input_linked_list(head, tail, val);
    }

    print_recartion(head);

    return 0;
}
