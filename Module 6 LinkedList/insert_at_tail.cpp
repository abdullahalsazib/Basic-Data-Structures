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
void insert_linked_list(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_linked(Node *head)
{
    Node *tmp = head;

    cout << "Your linked list value is : ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        int op;
        cout << "insert to type 1: " << endl;
        cout << "print to type 2: " << endl;
        cout << "terminat to type 3: " << endl;
        cin >> op;

        if (op == 1)
        {
            cout << "inter value :";
            int v;
            cin >> v;
            insert_linked_list(head, v);
        }
        else if (op == 2)
        {
            print_linked(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}
