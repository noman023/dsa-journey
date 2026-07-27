// Problem Statement

// You are given a doubly linked list of unique string values. These strings refer to web addresses without any spaces. You will be given Q queries. In each query you will be given some commands. Type of commands are -

// visit address - You need to go to that address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".

// next - You need to go to the next address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".

// prev - You need to go to the previous address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".

// One more thing, if the address isn't available make sure you don't move from your current position. You are at the head initially.

// Note: You can use Singly/Doubly Linked List or STL List to solve this problem.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;

    string val;
    int q;

    while (true)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }

        l.push_back(val);
    }

    list<string>::iterator cur = l.begin();
    string command;

    cin >> q;

    while (q--)
    {
        cin >> command;

        if (command == "visit")
        {
            string addr;
            cin >> addr;

            bool found = false;
            list<string>::iterator it;

            for (it = l.begin(); it != l.end(); it++)
            {
                if (*it == addr)
                {
                    found = true;
                    break;
                }
            }

            if (found)
            {
                cur = it;
                cout << *cur << "\n";
            }
            else
            {
                cout << "Not Available\n";
            }
        }
        else if (command == "next")
        {
            list<string>::iterator it = cur;
            it++;

            if (it != l.end())
            {
                cur = it;
                cout << *cur << "\n";
            }
            else
            {
                cout << "Not Available\n";
            }
        }
        else if (command == "prev")
        {
            if (cur != l.begin())
            {
                cur--;
                cout << *cur << "\n";
            }
            else
            {
                cout << "Not Available\n";
            }
        }
    }

    return 0;
}