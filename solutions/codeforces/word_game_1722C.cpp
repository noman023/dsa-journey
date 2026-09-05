#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        map<string, vector<int>> mp;
        vector<int> ans(3, 0);

        int n;
        cin >> n;

        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;

                mp[s].push_back(i);
            }
        }

        for (auto [s, v] : mp)
        {
            if (v.size() == 1)
            {
                ans[v[0] - 1] += 3;
            }
            else if (v.size() == 2)
            {
                ans[v[0] - 1] += 1;
                ans[v[1] - 1] += 1;
            }
        }

        for (auto v : ans)
        {
            cout << v << " ";
        }
        cout << '\n';
    }

    return 0;
}