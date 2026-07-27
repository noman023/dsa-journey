#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_forward(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void print_backward(Node *tail)
{
    Node *tmp = tail;

    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->prev;
    }
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

int main()
{

    Node *head = new Node(12);
    Node *mid = new Node(13);
    Node *tail = new Node(14);

    head->next = mid;
    mid->prev = head;
    mid->next = tail;

    tail->prev = mid;

    insert_at_head(head, 100);
    // print_forward(head);
    cout << head->val;
    // print_backward(tail);

    return 0;
}