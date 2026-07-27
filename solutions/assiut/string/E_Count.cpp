// make sum of all digits from a string.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int convert_to_int = s[i] - '0';
        sum += convert_to_int;
    }

    cout << sum << endl;

    return 0;
}