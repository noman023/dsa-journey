#include <bits/stdc++.h>
using namespace std;

void take_input(auto &list)
{
    int val;
    while (cin >> val && val != -1)
    {
        list.push_back(val);
    }
}

int main()
{
    list<int> l;
    list<int> l2;

    take_input(l);
    take_input(l2);

    int l_size = l.size(), l2_size = l2.size();

    bool is_same = true;

    if (l_size == l2_size)
    {
        for (auto it = l.begin(), it2 = l2.begin(); it != l.end(); it++, it2++)
        {
            if (*it != *it2)
            {
                is_same = false;
                break;
            }
        }
    }
    else
    {
        is_same = false;
    }

    cout << (is_same ? "YES" : "NO") << endl;

    return 0;
}