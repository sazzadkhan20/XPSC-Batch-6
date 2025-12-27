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
        cin.ignore();
        int k, n, m;
        bool flag = true;
        cin >> k >> n >> m;
        vector<int> ans, a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (a[i] <= b[j])
            {
                ans.push_back(a[i]);
                if (a[i] == 0)
                {
                    k++;
                }
                else if (a[i] > k)
                {
                    flag = false;
                    break;
                }
                i++;
            }
            else
            {
                ans.push_back(b[j]);
                if (b[j] == 0)
                {
                    k++;
                }
                else if (b[j] > k)
                {
                    flag = false;
                    break;
                }
                j++;
            }
        }
        while (i < n)
        {
            ans.push_back(a[i]);
            if (a[i] == 0)
            {
                k++;
            }
            else if (a[i] > k)
            {
                flag = false;
                break;
            }
            i++;
        }
        while (j < m)
        {
            ans.push_back(b[j]);
            if (b[j] == 0)
            {
                k++;
            }
            else if (b[j] > k)
            {
                flag = false;
                break;
            }
            j++;
        }
        if (!flag)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (int val : ans)
            {
                cout << val << ' ';
            }
            cout << '\n';
        }
    }
}