// Problem Statement

// Given a string S containing just the characters 0 and 1, determine if the input string is valid.

// An input string is valid if the string is empty after doing some operatios. The available operations are:

// 0 can delete its previous available character 1 along with itself. If there is no 1 available to delete, it will not delete itself.

// 1 can delete its previous available character 0 along with itself. If there is no 0 available to delete, it will not delete itself.

// Note: You need to solve it using STL Stack or Queue only.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];

            if (!st.empty() && st.top() != ch)
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }

        if (st.empty())
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    cout << endl;

    return 0;
}