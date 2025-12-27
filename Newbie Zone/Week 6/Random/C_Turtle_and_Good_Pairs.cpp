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
        string s;
        cin >> n >> s;
        vector<int> freq(26, 0);
        bool flag = true;
        for (int i = 0; i < s.length(); i++)
        {
            int index = s[i] - 'a';
            freq[index]++;
        }
        while (flag)
        {
            flag = false;
            for (int i = 0; i < 26; i++)
            {
                if (freq[i] != 0)
                {
                    flag = true;
                    char c = 'a' + i;
                    cout << c;
                    freq[i]--;
                }
            }
        }
        cout << '\n';
    }
}