#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string letters = "abcdefghijklmnopqrstuvwxyz";
    bool freq[26] = {false};

    for (char c : s)
    {
        int char_index = c - 'a';
        freq[char_index] = true;
    }

    int smallest_char_index;
    bool found = false;
    for (int i = 0; i <= 25; i++)
    {
        if (freq[i] == false)
        {
            smallest_char_index = i;
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << letters[smallest_char_index];
    }
    else
    {
        cout << "None";
    }

    return 0;
}