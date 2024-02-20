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
void input_singly(Node *&head, Node *&tail, int val)
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
void normal_print(Node *head)
{
     Node *tmp = head;
     while (tmp != NULL)
     {
          cout << tmp->value << " ";
          tmp = tmp->next;
     }
}
void recourcion(Node *n)
{
     if (n == 0)
          return;
     recourcion(n->next);
     cout << n->value << " ";
}

void reverce_print(Node *&head, Node *cur)
{
     if (cur->next == NULL)
     {
          head = cur;
          return;
     }
     reverce_print(head, cur->next);
     cur->next->next = cur;
     cur->next = NULL;
}
int main()
{
     // Node *head = new Node(10);
     // Node *a = new Node(20);
     // Node *b = new Node(30);

     // head->next = a;
     // a->next = b;

     Node *head = NULL;
     Node *tail = NULL;

     int v;
     while (true)
     {
          cin >> v;
          if (v == -1)
               break;
          input_singly(head, tail, v);
     }
     cout << endl;
     reverce_print(head, head);
     // normal_print(head);
     // cout << endl;
     // recourcion(head);

     return 0;
}
