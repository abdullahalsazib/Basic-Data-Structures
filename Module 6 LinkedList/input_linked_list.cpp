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

int main()
{
    int val;
    Node *head = NULL;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert_linked_list(head, val);
    }

    print_linked(head);

    return 0;
}
