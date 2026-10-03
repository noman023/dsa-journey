#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, pair<string, string>> servers;

    while (n--)
    {
        string name, ip;
        cin >> name >> ip;
        servers[ip] = {name, ip};
    }

    while (m--)
    {
        string cmd, ip;
        cin >> cmd >> ip;
        string clean_ip = ip.substr(0, ip.length() - 1);

        string ip_name = servers[clean_ip].first;

        cout << cmd << " " << ip << " #" << ip_name << "\n";
    }

    return 0;
}