#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a == b)
        cout << a + b << endl;
    else
    {
        if (a > b)
            cout << a + a - 1 << endl;
        else
            cout << b + b - 1 << endl;
    }
}