#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        set<int> seen;
        int i;

        for (i = n - 1; i >= 0; i--)
        {
            // If we see a duplicate, we cannot include this element or anything before it
            if (seen.count(v[i]))
            {
                break;
            }

            seen.insert(v[i]);
        }

        // 'i' stopped at the first duplicate from the right.
        // The number of elements to remove is exactly (i + 1).
        cout << i + 1 << "\n";
    }

    return 0;
}
