#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int higestBit = __lg(n);
        int B = (1 << higestBit);
        int A = n - B;
        cout << A << ' ' << B << '\n';
    }
}