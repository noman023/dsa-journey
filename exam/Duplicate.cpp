#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if (v[i] == v[k])
            {
                found = true;
                break;
            }
        }
    }

    cout << (found == true ? "YES" : "NO") << endl;
    return 0;
}
