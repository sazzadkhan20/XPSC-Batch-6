#include <bits/stdc++.h>

using namespace std;

void frequency(int freq[], string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        int v = s[i] - 'a';
        freq[v]++;
    }
}

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
        int freq[26];
        memset(freq, 0, sizeof(freq));
        frequency(freq, s);
        vector<char> v;
        char val[26];
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                char c = 'a' + i;
                v.push_back(c);
            }
        }
        int i = 0, j = v.size() - 1;
        while (i <= j)
        {
            int v1 = v[i] - 'a';
            int v2 = v[j] - 'a';
            val[v1] = v[j];
            val[v2] = v[i];
            i++, j--;
        }
        for (char c : s)
        {
            int v1 = c - 'a';
            cout << val[v1];
        }
        cout << '\n';
    }
}