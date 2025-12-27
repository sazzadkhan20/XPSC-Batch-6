#include <bits/stdc++.h>
#define ll long long int
#define pa pair<int, int>
using namespace std;

int min_XOR(int totalXOR, vector<int> v)
{
    int minXOR = totalXOR;
    for (int i = 0; i < v.size(); i++)
    {
        minXOR = min(minXOR, totalXOR ^ v[i]);
    }
    return minXOR;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int totalXOR = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            totalXOR ^= v[i];
        }
        if (totalXOR != 0)
            totalXOR = min_XOR(totalXOR, v);
        cout << totalXOR << '\n';
    }
}