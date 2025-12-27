#include <bits/stdc++.h>

using namespace std;
bool freq[26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 97;
        if (!freq[index])
            freq[index] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!freq[i])
        {
            flag = true;
            cout << char('a' + i) << endl;
            break;
        }
    }
    if (!flag)
        cout << "None\n";
}