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
        cin >> n;
        vector<char> v = {'a', 'e', 'i', 'o', 'u'};
        int val = n / 5;
        int increment = n - val * 5;
        val++;
        for (int i = 0; i < 5; i++)
        {
            if (increment == 0)
            {
                val--;
            }
            increment--;
            for (int j = 0; j < val; j++)
            {
                cout << v[i];
            }
        }
        cout << '\n';
    }
}