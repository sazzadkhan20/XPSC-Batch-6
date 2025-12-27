#include <bits/stdc++.h>
#define ll long long int

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
        ll value = 0;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                value += i;
            }
            else
            {
                value += n - i - 1;
            }
        }
        // cout << value;
        int i = 0, j = n - 1;
        int count = 0;
        while (i <= j)
        {
            if (i == j && n % 2 == 0)
            {
                if (s[i] == 'R')
                {
                    value += i;
                    value -= (n - i - 1);
                    v.push_back(value);
                }
                break;
            }
            else if (i == j)
            {
                break;
            }
            if (count % 2 == 0 && s[i] == 'L')
            {
                value += n - i - 1;
                value -= i;
                v.push_back(value);
                i++;
            }
            else if (count % 2 == 0 && s[i] == 'R')
            {
                i++;
            }
            if (count % 2 != 0 && s[j] == 'R')
            {
                value += j;
                value -= (n - j - 1);
                v.push_back(value);
                j--;
            }
            else if (count % 2 != 0 && s[j] == 'L')
            {
                j--;
            }
            count++;
        }

        int sz = v.size();
        sz = n - sz;
        for (ll val : v)
        {
            cout << val << ' ';
            // value = val;
        }
        if (sz >= 1)
        {
            for (int i = 1; i <= sz; i++)
            {
                cout << value << ' ';
            }
        }
        cout << '\n';
    }
}