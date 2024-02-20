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
Node* InputTree()
{
    int val;
    Node* root;
    cin >> val;
    if(val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue <Node*>  q;
    if(root)
        q.push(root);
    
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l, r;
        Node* myLeft;
        Node* myRight;
        cin >> l >> r;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}

vector <int> reverseLevelePrint(Node* root)
{
    queue<Node*> q;
    vector <int> v;
    if(root)
        q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        v.push_back(f->val);

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return v;
}
int main()
{
    Node* root = InputTree();

    vector <int> v = reverseLevelePrint(root);

    reverse(v.begin(), v.end());
    for(int ele:v)
    {
        cout << ele << " ";
    }

    
    return 0;
}
