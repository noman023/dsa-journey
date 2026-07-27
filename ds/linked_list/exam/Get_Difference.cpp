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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *tailnode = new Node(val);

    if (head == NULL)
    {
        head = tailnode;
        tail = tailnode;
        return;
    }

    tail->next = tailnode;
    tail = tailnode;
}

void print_difference(Node *head)
{
    int max, min = head->val;

    for (Node *i = head; i != NULL; i = i->next)
    {
        if (max < i->val)
        {
            max = i->val;
        }

        if (min > i->val)
        {

            min = i->val;
        }
    }

    cout << max - min << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    print_difference(head);

    return 0;
}