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

void search_value(Node *head, int x)
{
    int idx = -1;
    bool found = false;
    for (Node *i = head; i != NULL; i = i->next)
    {
        idx++;
        if (i->val == x)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << idx << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t, x;

    cin >> t;

    while (t--)
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

        cin >> x;
        search_value(head, x);
    }

    return 0;
}