#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_set<string> seen;

    while (n--)
    {
        string name;
        cin >> name;

        if (seen.find(name) == seen.end())
        {
            seen.insert(name);
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}