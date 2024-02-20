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
void insert_tail(Node *&head, Node *&tail, int val)
{
     Node *newNode = new Node(val);

     if (head == NULL)
     {
          head = newNode;
          tail = newNode;
          return;
     }
     tail->next = newNode;
     newNode->prev = tail;
     tail = tail->next;
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
void print_rev(Node *tail)
{
     Node *tmp = tail;

     while(tmp != NULL)
     {
          cout << tmp->value << " ";
          tmp = tmp->prev;
     }
}
int main()
{
     Node *head = NULL;
     Node *tail = NULL;

     int val;

     while (true)
     {
          // code
          cin >> val;
          if (val == -1)
               break;
          insert_tail(head, tail, val);
     }
     print_linked(head);
     cout << endl;
     print_rev(tail);


     return 0;
}
