/**
 *    author:  sazzad
 *    created: 02.07.2025 20:03:10
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    ll n;
    cin >> n;
    stack<ll> st;
    st.push(n);
    int highestBit = __lg(n);
    for (int i = 0; i <= highestBit; i++)
    {
        ll ans = n;
        if (((n >> i) & 1)) // On Bit check
        {
            ans -= (1LL << i);
            if (ans != 0)
                st.push(ans);
        }
    }
    cout << st.size() << '\n';
    while (!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}