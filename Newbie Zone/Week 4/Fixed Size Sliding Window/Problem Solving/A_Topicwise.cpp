#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    char c;
    char dotnextChar;
    int index = 0;
    for (int i = s.length() - 1; i > 0; i--)
    {
        if (s[i] == '.')
        {
            c = s[i - 1];
            index = i - 1;
            dotnextChar = s[i + 1];
            break;
        }
    }
    int val = (int)(c - '0');
    if (val == 9)
    {
        cout << "GOTO Vasilisa.\n";
        return 0;
    }
    for (int i = 0; i < index; i++)
    {
        cout << s[i];
    }
    int temp = (int)(dotnextChar - '0');
    if (temp >= 5)
    {
        cout << val + 1 << '\n';
    }
    else
    {
        cout << val << '\n';
    }
}