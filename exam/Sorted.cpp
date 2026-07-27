#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> ar(n);

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        bool is_asc = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                is_asc = false;
                break;
            }
        }

        cout << (is_asc == true ? "YES" : "NO") << endl;
    }

    return 0;
}