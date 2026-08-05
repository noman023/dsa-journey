// Problem Statement

// You will be given a binary tree as input in level order. You need to output the sum of all node's values in that tree except the leaf nodes.

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

int calculate_sum(Node *root)
{
    queue<Node *> q;
    q.push(root);
    int sum = 0;

    while (!q.empty())
    {
        auto f = q.front();

        if (f->left || f->right)
        {
            sum += f->val;
        }

        q.pop();

        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }

    return sum;
}

int main()
{

    auto root = binary_tree_input();

    int sum = calculate_sum(root);
    cout << sum << endl;

    return 0;
}