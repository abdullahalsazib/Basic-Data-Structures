//
// Created by mdsaz on 2/9/2024.
//
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

int NodeLevel(Node* root, int searchVal)
{
    queue<pair<Node*, int>> q;
    q.push({root, 1});

    while(!q.empty())
    {
        pair<Node*,int> parent = q.front();
        Node* node = parent.first;
        int level = parent.second;
        q.pop();

        //--------------//

        if(node->val == searchVal)
        {
            return level;
        }

        //--------------//
        if(node->left)
            q.push({node->left, level + 1});
        if(node->right)
            q.push({node->right, level + 1});
    }
}
vector<int> getleftLevel(Node*root)
{
    bool frq[3005] = {false};
    queue<pair<Node*, int>> q;
    if(root)
        q.push({root, 1});
    vector<int> v;
    while(!q.empty())
    {
        pair<Node*,int> pr = q.front();
        q.pop();
        Node* node = pr.first;
        int level = pr.second;

        if(frq[level] == false)
        {
            v.push_back(node->val);
            frq[level] = true;
        }

        if(node->left)
            q.push({node->left, level+1});
        if(node->right)
            q.push({node->right, level + 1});
    }
    return v;
}
int main()
{
    Node* root = InputTree();

    vector<int> v = getleftLevel(root);
    for(int val:v)
    {
        cout << "[" << val << "] ";
    }
    cout << endl;
    PreOrder(root);


    return 0;
}