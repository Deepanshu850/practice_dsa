#include <bits/stdc++.h>

int main()
{
    // square pattern
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {

        for (int j = 1; j <= n-i+1; j++)
        {

            cout << j;
        }
        cout << endl;
    };
};