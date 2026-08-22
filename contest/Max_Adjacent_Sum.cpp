#include <bits/stdc++.h>
using namespace std;

long long find_sum(vector<int> ar)
{
    long long max_sum = 0;
    for (int i = 0; i < ar.size() - 1; i++)
    {
        long long sum = ar[i] + ar[i + 1];

        if (sum > max_sum)
        {
            max_sum = sum;
        }
    }

    return max_sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    vector<pair<int, int>> odd;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < ar.size(); i++)
    {
        if (i % 2 != 0)
        {
            odd[odd.size()] = {i, ar[i]};
            cout << ar[i];
            break;
        }
    }

    for (auto v : odd)
    {
        cout << v.first << " " << v.second << endl;
    }

    long long sum = find_sum(ar);
    cout << sum;
    return 0;
}