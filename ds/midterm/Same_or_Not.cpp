// Problem Statement

// There is a list of N values that were inserted into a stack and a list of M values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

// Note: You need to solve it using STL Stack and Queue only.

#include <bits/stdc++.h>
using namespace std;

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
    stack<int> s;
    queue<int> q;

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
