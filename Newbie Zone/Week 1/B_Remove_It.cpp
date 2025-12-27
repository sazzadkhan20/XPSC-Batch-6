#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val != x)
            cout << val << " ";
    }
    cout << endl;
}