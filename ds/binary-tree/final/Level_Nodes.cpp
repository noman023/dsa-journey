// Problem Statement

// You will be given a binary tree as input in level order. Also you will be given a level X. You need to print all the node's values in that level from left to right. Assume that level starts from 0.

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

vector<int> level_nodes(Node *root, int x)
{
    vector<int> v;
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        auto parent = q.front();
        q.pop();

        Node *node = parent.first;
        int level = parent.second;

        if (level == x)
        {
            v.push_back(node->val);
        }

        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }

    return v;
}

int main()
{
    int x;
    auto root = binary_tree_input();

    cin >> x;
    auto res = level_nodes(root, x);

    if (res.empty())
    {
        cout << "Invalid" << endl;
    }
    else
    {
        for (auto val : res)
        {
            cout << val << " ";
        }
    }

    return 0;
}