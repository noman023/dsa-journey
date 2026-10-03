#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        string s;
        int l;
        cin >> l;

        for (int i = 0; i < l; i++)
        {
            char c;
            cin >> c;
            s.push_back(c);
        }

        set<char> char_set(s.begin(), s.end());
        string r(char_set.begin(), char_set.end());

        map<char, char> char_map;

        for (int i = 0, j = r.size() - 1; i <= j; i++, j--)
        {
            char tmp = r[i];
            char_map[tmp] = r[j];
            char_map[r[j]] = tmp;
        }

        string result;

        for (int i = 0; i < s.size(); i++)
        {
            result.push_back(char_map[s[i]]);
        }

        cout << result << '\n';
    }

    return 0;
}