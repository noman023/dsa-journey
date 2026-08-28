#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        char ar[2][n];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ar[i][j];
            }
        }

        bool is_same = false;

        for (int i = 0; i < n; i++)
        {
            if (ar[0][i] == ar[1][i])
            {
                is_same = true;
            }
            else if (ar[0][i] == 'G' && ar[1][i] == 'B')
            {
                is_same = true;
            }
            else if (ar[0][i] == 'B' && ar[1][i] == 'G')
            {
                is_same = true;
            }
            else
            {
                is_same = false;
                break;
            }
        }

        cout << (is_same ? "Yes" : "No") << endl;
    }

    return 0;
}