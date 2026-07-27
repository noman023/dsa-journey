#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int operations = 0;
    while (n--)
    {
        string s;
        cin >> s;

        if (s == "++X" || s == "X++")
        {
            operations++;
        }
        else
        {
            operations--;
        }
    }

    cout << operations << endl;
    return 0;
}