#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        string password;
        cin >> password;
        int index = password.length();
        char c = password[index - 1];
        for (int i = 1; i < password.length(); i++)
        {
            if (password[i] == password[i - 1])
            {
                index = i;
                c = password[i];
                break;
            }
        }
        if (c == 'z')
            c = 'a';
        else
            c++;
        for (int i = 0; i < password.length(); i++)
        {
            if (i == index)
            {
                cout << c;
            }
            cout << password[i];
        }
        if (index == password.length())
        {
            cout << c;
        }
        cout << '\n';
    }
}