#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, k;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;

        vector<int> a(n);
        vector<bool> used(n + 1, false);

        int changes = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] >= 1 && a[i] <= n && !used[a[i]])
            {
                used[a[i]] = true;
            }
            else
            {
                changes++;
            }
        }

        if (changes <= k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}