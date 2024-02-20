#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = left;
        this->right = right;
    }
};

Node* InputTree()
{
    int val;
    Node* root;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue <Node*> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();
        ///--starting;

        int l, r;
        Node* myleft;
        Node* myright;
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
void PreOrder(Node* root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}
bool inNodePresent(Node* root, int x)
{
    //base case
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;

    bool l = inNodePresent(root->left, x);
    bool r = inNodePresent(root->right, x);

    //return (l || r);

    if (l == true || r == true) //->(l||r);
        return true;
    else
        return false;

}
int main()
{
    Node* root = InputTree();
    int x;
    cout << "Enter x Valie: ";
    cin >> x;
    if (inNodePresent(root, x) == true)
        cout << endl << "True" << endl;
    else
        cout << endl << "Flase" << endl;




    PreOrder(root);


    return 0;
}