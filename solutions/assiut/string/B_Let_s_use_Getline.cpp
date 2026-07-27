// print every char from a string until you found '\' character.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '\\')
        {
            cout << s[i];
        }
        else
        {
            break;
        }
    }

    return 0;
}