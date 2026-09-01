#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }

    int sereja = 0;
    int dima = 0;

    bool s_turn = true;
    bool d_turn = false;

    while (!dq.empty())
    {
        int a, b;
        if (s_turn)
        {
            a = dq.front();
            b = dq.back();

            if (a > b)
            {
                sereja += a;
                dq.pop_front();
            }
            else
            {
                sereja += b;
                dq.pop_back();
            }

            s_turn = false;
            d_turn = true;
        }
        else
        {
            a = dq.front();
            b = dq.back();

            if (a > b)
            {
                dima += a;
                dq.pop_front();
            }
            else
            {
                dima += b;
                dq.pop_back();
            }

            d_turn = false;
            s_turn = true;
        }
    }

    cout << sereja << " " << dima << endl;

    return 0;
}