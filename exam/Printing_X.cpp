#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "X" << endl;
    }
    else
    {
        int middle = (n / 2) + 1;

        for (int i = 1; i <= n; i++)
        {
            int leading = 0;
            int inner = 0;

            if (i < middle)
            {
                leading = i - 1;
                inner = n - 2 * i;
                for (int s = 0; s < leading; s++)
                    cout << " ";
                cout << "\\";
                for (int s = 0; s < inner; s++)
                    cout << " ";
                cout << "/" << endl;
            }
            else if (i == middle)
            {
                leading = middle - 1;
                for (int s = 0; s < leading; s++)
                    cout << " ";
                cout << "X" << endl;
            }
            else
            {
                leading = n - i;
                inner = 2 * i - n - 2;
                for (int s = 0; s < leading; s++)
                    cout << " ";
                cout << "/";
                for (int s = 0; s < inner; s++)
                    cout << " ";
                cout << "\\" << endl;
            }
        }
    }

    return 0;
}