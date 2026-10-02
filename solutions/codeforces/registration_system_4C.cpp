#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> string_counts;

    while (n--)
    {
        string s;
        cin >> s;

        if (string_counts[s] == 0)
        {
            cout << "OK\n";
            string_counts[s] = 1;
        }
        else
        {
            cout << s << string_counts[s] << "\n";
            string_counts[s]++;
        }
    }

    return 0;
}
