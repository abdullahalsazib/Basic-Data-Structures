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
void print_normal(Node *head)
{
     Node *tmp = head;
     while (tmp != NULL)
     {
          cout << tmp->value << " ";
          tmp = tmp->next;
     }
}
void reverce(Node *head, Node *tail)
{
     Node *i = head;
     Node *j = tail;
     while (i != j && i->next != j)
     {
          swap(i->value, j->value);
          i = i->next;
          j = j->prev;
     }
     swap(i->value, j->value);
}
int main()
{
     Node *head = new Node(10);
     Node *a = new Node(20);
     Node *b = new Node (30);
     Node *c = new Node (40);
     Node *tail = c;

     head->next = a;
     a->prev = head;

     a->next = b;
     b->prev = a;

     b->next = c;
     c->prev = b;

     reverce(head, tail);
     print_normal(head);

     return 0;
}
