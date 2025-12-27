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
        string decodeString = "";
        int i = n - 1;
        while (i >= 0)
        {
            if (s[i] == '0')
            {
                int val = (int)(s[i - 2] - '0');
                val *= 10;
                val += (int)(s[i - 1] - '0');
                decodeString += (char)(val) + 96;
                i -= 3;
            }
            else
            {
                decodeString += (char)(s[i] - '0') + 96;
                i--;
            }
        }
        reverse(decodeString.begin(), decodeString.end());
        cout << decodeString << '\n';
    }
}