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
        int oneSubstringCount = 0, zeroSubstringCount = 0;
        bool oneFlag = false, zeroFlag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && !oneFlag)
            {
                oneSubstringCount++;
                oneFlag = true;
                zeroFlag = false;
            }
            else if (s[i] == '0' && !zeroFlag)
            {
                zeroSubstringCount++;
                oneFlag = false;
                zeroFlag = true;
            }
        }
        cout << min(zeroSubstringCount, oneSubstringCount) << '\n';
    }
}