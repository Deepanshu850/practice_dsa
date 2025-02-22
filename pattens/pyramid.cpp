#include <bits/stdc++.h>

int main()
{
    // square pattern
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    };
};