#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    int count = 0;

    while (ss >> word)
    {

        if (word == "phitron" || word == "Phitron" || word == "PHITRON")
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}