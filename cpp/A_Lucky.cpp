#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int lSum = 0, rSum = 0;
        for (int i = 0, j = s.size() - 1; i < 3; i++, j--)
        {
            lSum += (s[i] - '0');
            rSum += (s[j] - '0');
        }

        cout << (lSum == rSum ? "YES" : "NO") << endl;
    }

    return 0;
}