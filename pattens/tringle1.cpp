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

            cout << j+1;
        }
        cout << endl;
    };
};