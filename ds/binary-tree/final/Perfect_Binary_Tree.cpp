// Problem Statement

// You will be given a binary tree as input in level order. You need to tell if the binary tree is perfect or not. A binary tree is called perfect if all leaf nodes are at the maximum depth of the tree, and the tree is completely filled with no gaps.

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

int count_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lc = count_nodes(root->left);
    int rc = count_nodes(root->right);

    return lc + rc + 1;
}

int count_level(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lc = count_level(root->left);
    int rc = count_level(root->right);

    return max(lc, rc) + 1;
}

int main()
{

    auto root = binary_tree_input();
    int nodes = count_nodes(root);
    int level = count_level(root);

    int v = pow(2, level) - 1;

    if (v == nodes)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}