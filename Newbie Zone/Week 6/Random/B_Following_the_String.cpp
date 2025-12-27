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
        vector<int> freq(26, 0);
        string s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int i = 0; i < 26; i++)
            {
                if (freq[i] == x)
                {
                    char c = 'a' + i;
                    s += c;
                    freq[i]++;
                    break;
                }
            }
        }
        cout << s << '\n';
    }
}