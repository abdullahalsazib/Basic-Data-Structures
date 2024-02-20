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
		this->left = NULL;
		this->right = NULL;
	}
};
Node* inputTree()
{
	int val;
	Node* root;
	cin >> val;
	if (val == -1)
		root = NULL;
	else
		root = new Node(val);

	queue <Node*> q;

	if (root)// != NULL
		q.push(root);

	while (!q.empty())
	{
		Node* f = q.front();
		q.pop();

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

		if (f->left)// != NULL
			q.push(f->left);
		if (f->right)// != NULL
			q.push(f->right);
	}
	return root;
}
void preOrder(Node* root)
{
	if (root == NULL) return;

	cout << root->val << " ";
	preOrder(root->left);
	preOrder(root->right);
}

int maxHeight(Node* root)
{
	if (root == NULL)
		return 0;
	int l = maxHeight(root->left);
	int r = maxHeight(root->right);
	return max(l, r) + 1;
}

int main()
{

	Node* root = inputTree();
	preOrder(root);
	cout << endl << maxHeight(root);


	return 0;
}