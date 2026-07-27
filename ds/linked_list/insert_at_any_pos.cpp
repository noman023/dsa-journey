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

void insert_at_any_pos(Node *head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
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
    Node *n3 = new Node(55);

    head->next = n2;
    n2->next = n3;

    insert_at_any_pos(head, 1, 233);

    print_linked_list(head);

    return 0;
}