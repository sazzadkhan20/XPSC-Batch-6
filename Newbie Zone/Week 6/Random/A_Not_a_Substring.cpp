#include <bits/stdc++.h>

using namespace std;

bool substring_check(string s, string subS)
{
    int n = 0, i = 0, j = 0;
    while (n <= s.length() - subS.length())
    {
        if (j < subS.length() && i < s.length() && s[i] == subS[j])
        {
            j++;
        }
        else if (j == subS.length())
        {
            return true;
        }
        else
        {
            i = n;
            n++;
            j = 0;
        }
        i++;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        string temp1 = "", temp2 = "";
        int n = s.length();
        char c1 = '(', c2 = ')';
        // temp1 string setup
        for (int i = 0; i < n; i++)
        {
            temp1 += c1;
        }
        for (int i = 0; i < n; i++)
        {
            temp1 += c2;
        }
        // temp2 string setup
        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0)
                temp2 += c1;
            else
                temp2 += c2;
        }
        if (!substring_check(temp1, s))
        {
            cout << "YES\n"
                 << temp1 << '\n';
        }
        else if (!substring_check(temp2, s))
        {
            cout << "YES\n"
                 << temp2 << '\n';
        }
        else
        {
            cout << "NO\n";
        }
    }
}