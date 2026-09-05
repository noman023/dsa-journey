#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<string, string> user, handle;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        if (handle.find(a) != handle.end())
        {
            string usr = handle[a];
            user[usr] = b;

            handle.erase(a);
            handle[b] = usr;
        }
        else
        {
            user[a] = b;
            handle[b] = a;
        }
    }

    cout << user.size() << endl;
    for (auto it : user)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}