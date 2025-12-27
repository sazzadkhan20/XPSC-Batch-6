#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int x;
        cin >> x;
        int val = 100 - x;
        cout << (val / 10) * 10 << endl;
    }
}