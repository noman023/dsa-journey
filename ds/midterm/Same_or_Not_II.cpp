// Problem Statement

// There is a list of N values that were inserted into a stack and a list of M values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

// Note: You cannot use any STL here. You need to implement the stack and queue by yourself. You can use linked list or array to implement the stack and queue as you want.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    };

    void pop()
    {
        Node *delete_node = tail;
        tail = tail->prev;
        delete delete_node;

        if (tail == NULL)
        {
            head = NULL;
            return;
        }

        tail->next = NULL;
    };

    int top()
    {
        return tail->val;
    };
};

class MyQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    };

    void pop()
    {
        Node *delete_node = head;
        head = head->next;
        delete delete_node;

        if (head == NULL)
        {
            tail = NULL;
            return;
        }

        head->prev = NULL;
    };

    int front()
    {
        return head->val;
    };
};

void input(int n, auto &container)
{
    int val;
    while (n--)
    {
        cin >> val;
        container.push(val);
    }
}

int main()
{
    MyStack s;
    MyQueue q;

    int n, m;
    cin >> n >> m;

    input(n, s);
    input(m, q);

    bool is_same = true;
    if (n != m)
    {
        is_same = false;
    }
    else
    {
        while (n--)
        {
            if (s.top() != q.front())
            {
                is_same = false;
                break;
            }

            s.pop();
            q.pop();
        }
    }

    cout << (is_same ? "YES" : "NO") << endl;

    return 0;
}