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
        string s;
        cin >> s;
        stack<int> stUpperCase;
        stack<int> stLowerCase;
        vector<char> v;
        int index = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'b')
            {
                if (!stLowerCase.empty())
                {
                    v[stLowerCase.top()] = '*';
                    stLowerCase.pop();
                }
            }
            else if (s[i] == 'B')
            {
                if (!stUpperCase.empty())
                {
                    v[stUpperCase.top()] = '*';
                    stUpperCase.pop();
                }
            }
            else
            {
                v.push_back(s[i]);
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    stUpperCase.push(index);
                }
                else
                {
                    stLowerCase.push(index);
                }
                index++;
            }
        }
        for (char c : v)
        {
            if (c != '*')
            {
                cout << c;
            }
        }
        cout << endl;
    }
}