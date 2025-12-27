#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        ll val;
        bool flag = true;
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        val = v[0] / (n - k + 1);
        if (v[0] % (n - k + 1) != 0 && val >= 0)
        {
            if (val == 0 && v[0] < 0 && n - k + 1 > abs(v[0]))
                val--;
            val++;
        }
        for (int i = 1; i < k; i++)
        {
            // cout << val << endl;
            if (val > v[i] - v[i - 1])
            {
                cout << "No\n";
                flag = false;
                break;
            }
            else
            {
                val = v[i] - v[i - 1];
            }
        }
        if (flag)
        {
            cout << "Yes\n";
        }
    }
}