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

void print_result(Node *head, Node *head2)
{
    Node *tmp1 = head;
    Node *tmp2 = head2;

    bool is_same = true;
    while (tmp1 != NULL || tmp2 != NULL)
    {
        // if one of the head becomes null set result as false and stop loop
        if (tmp1 == NULL || tmp2 == NULL)
        {
            is_same = false;
            break;
        }

        if (tmp1->val != tmp2->val)
        {
            is_same = false;
            break;
        }

        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    cout << (is_same ? "YES" : "NO") << endl;
}

Node *take_input()
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

    return head;
}

int main()
{
    Node *head = take_input();
    Node *head2 = take_input();

    print_result(head, head2);
    return 0;
}