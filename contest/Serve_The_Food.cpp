#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, x;
    queue<int> orders;
    cin >> q;

    while (q--)
    {
        cin >> x;
        int order_num;

        if (x == 1)
        {
            cin >> order_num;
            orders.push(order_num);
        }
        else
        {
            if (!orders.empty())
            {
                int val = orders.front();
                orders.pop();
                cout << val << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}