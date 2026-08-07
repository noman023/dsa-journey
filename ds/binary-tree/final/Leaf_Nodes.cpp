// Problem Statement

// You will be given a binary tree as input in level order. You need to print the values of leaf nodes in descending order.

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

Node *binary_tree_input()
{
    int val;
    cin >> val;
    Node *root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        auto p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *l_node, *r_node;

        if (l != -1)
        {
            l_node = new Node(l);
        }
        else
        {
            l_node = NULL;
        }

        if (r != -1)
        {
            r_node = new Node(r);
        }
        else
        {
            r_node = NULL;
        }

        p->left = l_node;
        p->right = r_node;

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
}

// colllect all leaf nodes to sorted in descending order
void collect_leaves(Node *root, vector<int> &leaves)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        leaves.push_back(root->val);
        return;
    }

    if (root->left)
    {
        collect_leaves(root->left, leaves);
    }

    if (root->right)
    {
        collect_leaves(root->right, leaves);
    }
}

// print all leaf nodes in descending order
void print_leaf_nodes_descending(Node *root)
{
    vector<int> leaves;

    collect_leaves(root, leaves);

    sort(leaves.begin(), leaves.end(), greater<int>());

    for (int val : leaves)
    {
        cout << val << " ";
    }
}

int main()
{
    auto root = binary_tree_input();
    print_leaf_nodes_descending(root);

    return 0;
}