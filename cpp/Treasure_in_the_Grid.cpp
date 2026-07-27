#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    int ar[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int m = 0; m < n; m++)
        {
            cin >> ar[i][m];
        }
    }

    while (q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int sum = 0;
        if (x1 == x2 && y1 == y2)
        {
            sum += ar[x1][y1];
        }
        else
        {
            sum = ar[x1][y1] + ar[x1][y2] + ar[x2][y1] + ar[x2][y2];
        }

        cout << sum << endl;
    }

    return 0;
}