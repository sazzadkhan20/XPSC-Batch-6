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
        int n;
        string s;
        cin >> n >> s;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                i++, j--;
                n -= 2;
            }
            else
            {
                break;
            }
        }
        cout << n << '\n';
    }
}