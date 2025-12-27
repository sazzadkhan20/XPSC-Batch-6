#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (b - a < 0)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << (b - a) + 1 << endl;
}