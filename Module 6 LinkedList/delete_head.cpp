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
        cout << endl
             << "inserted tail" << endl
             << endl;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << endl
         << "inserted tail" << endl
         << endl;
}
void print_linked(Node *head)
{
    cout << endl;
    cout << "Your linked list value is : ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Insert at position " << endl
         << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);

    newNode->next = head;
    head = newNode;
    cout << endl
         << "inserter at head" << endl
         << endl;
}
void delete_form_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl
         << "delete position " << pos << endl;
}
void deleteHead(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "delete head " << endl <<endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        int op;
        cout << "insert to type 1: " << endl;
        cout << "print to type 2: " << endl;
        cout << "insert in any position 3:" << endl;
        cout << "insert at head 4:" << endl;
        cout << "delete position 5:" << endl;
        cout << "delete head 6:" << endl;
        cout << "terminat 7: " << endl;
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
            int pos, v;
            cout << "Enter Position : ";
            cin >> pos;
            cout << "Enter value :";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter position ";
            cin >> pos;
            if (pos == 0)
            {
                deleteHead(head);
            }
            else
            {
                delete_form_position(head, pos);
            }
        }
        else if (op == 6)
        {
            deleteHead(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}