// Problem Statement

// You will be given a binary tree as input in level order. You need to print the outer side of the binary tree. See the sample input output for more clarifications. You need to print from the left most leaf node to right most leaf node.

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

void print_outer_tree(Node *root)
{
    vector<int> v;
    if (root == NULL)
    {
        return;
    }

    auto l_node = root->left;
    auto r_node = root->right;

    while (l_node != NULL) // insert left tree
    {

        v.push_back(l_node->val);
        if (l_node->left)
        {
            l_node = l_node->left;
        }
        else
        {
            l_node = l_node->right;
        }
    }

    reverse(v.begin(), v.end());
    v.push_back(root->val);

    while (r_node != NULL) // insert right tree
    {

        v.push_back(r_node->val);
        if (r_node->right)
        {
            r_node = r_node->right;
        }
        else
        {
            r_node = r_node->left;
        }
    }

    for (auto val : v)
    {
        cout << val << " ";
    }
}

int main()
{
    auto root = binary_tree_input();
    print_outer_tree(root);

    return 0;
}