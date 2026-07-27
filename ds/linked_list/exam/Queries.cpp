#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *tailnode = new Node(val);

    if (head == NULL)
    {
        head = tailnode;
        tail = tailnode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tail = tailnode;
    tmp->next = tail;
}

void delete_at_pos(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
    {
        return;
    }

    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
        }

        delete deleteNode;
        return;
    }

    Node *tmp = head;

    for (int i = 0; i < pos - 1 && tmp != NULL; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL)
    {
        return;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;

    if (tmp->next == NULL)
    {
        tail = tmp;
    }

    delete deleteNode;
}

void print_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q, x, v;
    cin >> q;

    while (q--)
    {
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_at_pos(head, tail, v);
        }

        print_list(head);
        cout << endl;
    }

    return 0;
}