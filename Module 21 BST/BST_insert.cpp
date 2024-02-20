#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_Tree()
{
    int val;
    Node *root;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        Node *myleft;
        Node *myright;
        cin >> l >> r;

        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        f->left = myleft;
        f->right = myright;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
void levorder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;

    if (x < root->val)
        return search(root->left, x);
    else
        return search(root->right, x);
}
void insert(Node*&root, int x)
{
    if(root == NULL)
    {
        root = new Node(x);
        return;
    }
    if(x < root->val)
    {
        if(root->left == NULL)
        {
            root->left = new Node(x);
        }
        else{
            insert(root->left, x);
        }
    }
    else{
        if(root->right == NULL)
        {
            root->right = new Node(x);
        }
        else{
            insert(root->right, x);
        }
    }
}
int main()
{
    Node *root = input_Tree();
    levorder(root);
    cout << endl;
    insert(root, 13);
    insert(root, 32);
    insert(root, 0);
    levorder(root);
    
    return 0;
}
