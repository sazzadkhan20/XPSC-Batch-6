#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    vector<int> v;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    // Two Pointers Technique
    int i = 0, j = 0;
    while (j < m)
    {
        if (i < n && v1[i] < v2[j])
        {
            counter++;
            i++;
        }
        else
        {
            v.push_back(counter);
            j++;
        }
    }
    for (int val : v)
    {
        cout << val << ' ';
    }
    cout << '\n';
}