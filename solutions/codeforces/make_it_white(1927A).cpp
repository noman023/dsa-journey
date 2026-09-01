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
        char arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int min = 0;

        int l = 0;
        int r = n - 1;

        while (true)
        {
            if (arr[l] == 'B' && arr[r] == 'B')
            {
                min = r - l + 1;
                break;
            }
            else if (arr[l] != 'B')
            {
                l++;
            }
            else if (arr[r] != 'B')
            {
                r--;
            }
        }

        cout << min << endl;
    }

    return 0;
}