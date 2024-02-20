//
// Created by mdsaz on 2/9/2024.
//
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
        this->left = left;
        this->right = right;
    }
};

Node *InputTree()
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
        ///--starting;

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
        ///-ending;
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void PreOrder(Node *root)
{
    if (root == NULL)
        return;
        
    cout << root->val << " ";

    PreOrder(root->left);
    PreOrder(root->right);
}
int mx = 0;
int diameterBinaryTree(Node *root)
{
    if (root == NULL)
        return 0;
    int l = diameterBinaryTree(root->left);
    int r = diameterBinaryTree(root->right);
    int d = l + r;
    mx = max(mx, d);
    return max(l, r) + 1;
}

void mainDiameter(Node *root)
{
    mx = 0;
    int l = mainDiameter(root->left);
    int r = mainDiameter(root->right);
    cout <<  max(mx, l + r) << " ";
}

int main()
{
    Node *root = InputTree();

   mainDiameter(root);

    return 0;
}