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

void delete_position(Node *head, int pos)
{
     Node *tmp = head;

     for(int i = 1; i <= pos -1 ; i++)
     {
          tmp = tmp->next;
     }
     Node *deleteNode = tmp->next;
     tmp->next = tmp->next->next;
     tmp->next->prev = tmp;

     delete deleteNode;
}

int main()
{
     // Node *head = NULL;
     // Node *tail = NULL;
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

     int pos;
     cout << "Delete Position : " ;

     cin >> pos;

     delete_position(head, pos);

     print_dubly_normal(head);
     cout << endl;
     print_dubly_rev(tail);

     return 0;
}
