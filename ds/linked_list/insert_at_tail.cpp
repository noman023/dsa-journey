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

void insert_at_tail(Node *head, Node *&tail, int val)
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
    // Node *tmp = head;

    // while (tmp->next != NULL)
    // {
    //     tmp = tmp->next;
    // }

    // tmp->next = tailnode;// store tailnode at the last node's next
}

void print_linked_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(35);
    Node *n2 = new Node(45);
    Node *tail = new Node(55);

    head->next = n2;
    n2->next = tail;

    insert_at_tail(head, tail, 1220);

    print_linked_list(head);

    return 0;
}