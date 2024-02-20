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
void input_singly_nodes(Node *&head, Node*&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;

}
void print_linked(Node *head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
void check_dep(Node *head)
{
    Node *tmp = head;
    bool flg = false;
    while(tmp->next != NULL)
    {
        if(tmp->value == tmp->next->value)
        {
            flg = true;
            return;
        }


        tmp = tmp->next;//tmp++;
    }
    if(flg == true) cout << "Yes";
    else cout <<"no";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while(true)
    {
        cin >> val;
        if(val == -1)break;
        input_singly_nodes(head, tail, val);
    }
    print_linked(head);
    cout << endl;
    check_dep(head);

    

    return 0;
}
