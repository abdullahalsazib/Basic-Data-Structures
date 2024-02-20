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
void reverse_print(Node *head, Node *tail)
{
     Node *i = head;
     Node *j = tail;

     while (i != j && i->next != j)
     {
          swap(i->value, j->value);
          // i++;
          i = i->next;
          // j--;
          j = j->prev;
     }
}
int main()
{
     Node *head = new Node(10);
     Node *a = new Node(20);
     Node *b = new Node(30);
     Node *c = new Node(40);
     Node *d = new Node(50);
     Node *tail = d;

     head->next = a;
     a->prev = head;
     a->next = b;
     b->prev = a;
     b->next = c;
     c->prev = b;
     c->next = d;
     d->prev = c;

     reverse_print(head, tail);
     print_normal(head);
     cout << endl;
     return 0;
}
