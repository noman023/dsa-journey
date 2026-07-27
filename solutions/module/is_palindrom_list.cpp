#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    int val;
    while (cin >> val && val != -1)
    {
        l.push_back(val);
    }

    bool is_same = true;
    for (auto it = l.begin(), it2 = prev(l.end()); it != it2 && next(it) != it2; it++, it2--)
    {
        if (*it != *it2)
        {
            is_same = false;
            break;
        }
    }

    cout << (is_same ? "YES" : "NO") << endl;

    return 0;
}