#include <bits/stdc++.h>
using namespace std;

long long find_sum(vector<int> ar)
{
    long long max_sum = 0;
    for (int i = 0; i < ar.size() - 1; i++)
    {
        for (int k = i + 1; k < ar.size(); k++)
        {
            long long sum = ar[i] + ar[k];

            if (sum > max_sum)
            {
                max_sum = sum;
            }
        }
    }

    return max_sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    long long sum = find_sum(ar);
    cout << sum;
    return 0;
}