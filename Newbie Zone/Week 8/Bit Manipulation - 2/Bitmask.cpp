#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    // O(2^n * n)
    for (int mask = 0; mask < (1 << n); mask++)
    {
        cout << mask << " -> ";
        for (int i = n - 1; i >= 0; i--)
        {
            cout << ((mask >> i) & 1) << ' ';
        }
        cout << '\n';
    }
}