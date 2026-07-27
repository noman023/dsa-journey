// Problem Statement

// You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

// You need to insert the value V at index X. Assume that index starts from 0.
// After that for each query you need to print the linked list from left to right and right to left.
// If the index is invalid, then print "Invalid".
// Note: You must use Doubly Linked List, otherwise you will not get marks.

// Output Format

// For each query print the linked list from left to right and right to left or print "Invalid" as asked.
// Print "L -> " before printing the linked list from left to right.
// Print "R -> " before printing the linked list from right to left.

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

void insert_at_any_pos(Node *&head, Node *&tail, int idx, int val, bool &is_invalid)
{
    // Empty list
    if (head == NULL)
    {
        if (idx != 0)
        {
            is_invalid = true;
            return;
        }

        Node *new_node = new Node(val);
        head = new_node;
        tail = new_node;
        return;
    }

    // Insert at head
    if (idx == 0)
    {
        Node *new_node = new Node(val);

        new_node->next = head;
        head->prev = new_node;
        head = new_node;

        return;
    }

    Node *tmp = head;

    for (int i = 1; i < idx; i++)
    {
        if (tmp == NULL)
        {
            is_invalid = true;
            return;
        }

        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        is_invalid = true;
        return;
    }

    Node *new_node = new Node(val);

    new_node->next = tmp->next;
    new_node->prev = tmp;

    if (tmp->next != NULL)
    {
        tmp->next->prev = new_node;
    }
    else
    {
        tail = new_node;
    }

    tmp->next = new_node;
}

void print_linked_list(Node *head, Node *tail)
{
    cout << "L -> ";

    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;

    cout << "R -> ";

    Node *tmp_tail = tail;

    while (tmp_tail != NULL)
    {
        cout << tmp_tail->val << " ";
        tmp_tail = tmp_tail->prev;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        bool is_invalid = false;

        insert_at_any_pos(head, tail, x, v, is_invalid);

        if (is_invalid)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            print_linked_list(head, tail);
        }
    }

    return 0;
}