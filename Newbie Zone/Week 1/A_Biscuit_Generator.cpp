#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;
    if (a > t)
    {
        cout << 0 << endl;
        return 0;
    }
    int val = t / a;
    val *= b;
    cout << val << endl;
}