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
  tail = newNode;
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
void print_linked(Node *head)
{
  Node *tmp = head;
  cout << "#----------*---------#" << endl;
  while (tmp != NULL)
  {
    cout << "[" << tmp->value << "] ";
    tmp = tmp->next;
  }
  cout << endl;
  cout << "#----------*---------#";
}
void inserted_linked(Node *head, int pos, int val)
{
  Node *newNode = new Node(val);
  Node *tmp = head;

  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
  }
  newNode->next = tmp->next;
  tmp->next = newNode;
  newNode->next->prev = newNode;
  newNode->prev = tmp;
}
void linked_at_head(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);

  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}
void delete_linked(Node *head, int pos)
{
  Node *tmp = head;

  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
  }
  Node *deleteNode = tmp->next;
  tmp->next = tmp->next->next;
  tmp->next->prev = tmp;
  delete deleteNode;
}
void deleteHead(Node *&head)
{
  Node *deleteNode = head;
  head = head->next;
  delete deleteNode;
}
void deleteTail(Node *&tail)
{
  Node*deleteNode = tail;
  tail = tail->prev;
  delete deleteNode;
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  while (true)
  {
    cout << endl;
    cout << "#-----Linked List-----#" << endl;
    cout << "#                     #" << endl;
    cout << "#  Create linked : 1  #" << endl;
    cout << "#  Print linked  : 2  #" << endl;
    cout << "#  Insert linked : 3  #" << endl;
    cout << "#  Delete linked : 4  #" << endl;
    cout << "#  Close         : 0  #" << endl;
    cout << "#                     #" << endl;
    cout << "#----------*----------#" << endl;
    cout << endl;
    int option;
    cin >> option;

    if (option == 1)
    {
      int val;
      cout << "Enter value :" << endl;
      cin >> val;
      insert_tail(head, tail, val);
      cout << "Add " << linked_size(head) << " itme" << endl;
    }
    else if (option == 2)
    {
      cout << "Your Item's";
      cout << endl;
      print_linked(head);
      cout << endl;
    }
    else if (option == 3)
    {
      // inserted
      int pos, val;
      cout << "Active position is: " << linked_size(head) << endl;
      cout << "Position: ";
      cin >> pos;
      cout << "Value: ";
      cin >> val;

      if (pos == 0)
      {
        linked_at_head(head, tail, val);
      }
      else if (pos == linked_size(head))
      {
        insert_tail(head, tail, val);
      }
      else if (pos > linked_size(head))
      {
        cout << "Invalid position!" << endl;
      }
      else
      {
        inserted_linked(head, pos, val);
      }
    }
    else if (option == 4)
    {
      int pos;
      cout << "Enter Delete Position: ";
      cin >> pos;
      if (pos > linked_size(head))
      {
        cout << "Invalid position!" << endl;
      }
      else if (pos == 0)
      {
        deleteHead(head);
      }
      else if(pos == linked_size(head))
      {
        deleteTail(tail);
      }
      else
      {
        delete_linked(head, pos);
      }
    }
    else if (option == 0)
    {
      break;
    }
  }

  return 0;
}
