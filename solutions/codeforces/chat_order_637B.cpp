#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> inputs(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> inputs[i];
    }

    deque<string> chat_order;
    unordered_set<string> seen;

    for (int i = n - 1; i >= 0; --i)
    {
        if (seen.find(inputs[i]) == seen.end())
        {
            chat_order.push_back(inputs[i]);
            seen.insert(inputs[i]);
        }
    }

    for (auto name : chat_order)
    {
        cout << name << "\n";
    }

    return 0;
}
