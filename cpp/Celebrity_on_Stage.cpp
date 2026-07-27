#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int im = 0;
    int mi = 0;

    for (int i = 0; i < k; i++)
    {
        if (a[i] > a[k - 1])
        {
            im++;
        }
    }

    for (int i = k - 1; i < n; i++)
    {
        if (a[i] < a[k - 1])
        {
            mi++;
        }
    }

    cout << im << " " << mi << endl;

    return 0;
}