#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string games;

    cin >> games;

    int anton_score = 0, danik_score = 0;
    for (int i = 0; i < games.length(); i++)
    {
        (games[i] == 'A') ? anton_score++ : danik_score++;
    }

    if (anton_score > danik_score)
    {
        cout << "Anton" << endl;
    }
    else if (danik_score > anton_score)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}