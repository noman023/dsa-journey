#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    string result = "";
    int b_count = 0;
    int B_count = 0;

    for (int i = (int)s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'b')
        {
            b_count++;
        }
        else if (s[i] == 'B')
        {
            B_count++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (b_count > 0)
            {
                b_count--;
            }
            else
            {
                result.push_back(s[i]);
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (B_count > 0)
            {
                B_count--;
            }
            else
            {
                result.push_back(s[i]);
            }
        }
    }

    reverse(result.begin(), result.end());
    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}
