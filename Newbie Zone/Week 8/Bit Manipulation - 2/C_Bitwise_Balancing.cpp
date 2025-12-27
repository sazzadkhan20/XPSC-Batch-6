/**
 *    author:  sazzad
 *    created: 05.07.2025 04:13:41
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    ll b, c, d;
    cin >> b >> c >> d;
    if (b == d)
    {
        cout << 0 << '\n';
        return;
    }
    ll ans = 0;
    for (int i = 61; i >= 0; i--)
    {
        if (((d >> i) & 1))
        {
            if (((b >> i) & 1) == 0 && ((c >> i) & 1))
            {
                ans = -1;
                break;
            }
            else if (((b >> i) & 1) == 0 && ((c >> i) & 1) == 0)
                ans += (1LL << i);
        }
        else
        {
            if (((b >> i) & 1) && ((c >> i) & 1))
                ans += (1LL << i);
            else if (((b >> i) & 1) && ((c >> i) & 1) == 0)
            {
                ans = -1;
                break;
            }
        }
    }
    cout << ans;
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

// Another Process-------

// /**
//  *    author:  sazzad
//  *    created: 05.07.2025 04:13:41
//  **/
// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long int
// #define pa pair<int, int>
// #define pa2 pair<ll, ll>
// const int N = 1e5 + 5;

// void solve()
// {
//     ll b, c, d;
//     cin >> b >> c >> d;

//     ll a = b | d;
//     for (int i = __lg(d); i >= 0; i--)
//     {
//         if (((d >> i) & 1) && ((c >> i) & 1))
//         {
//             a -= (1LL << i);
//         }
//     }
//     if (((a | b) - (a & c)) != d)
//         a = -1;
//     cout << a;
//     cout << '\n';
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         solve();
//     }
// }
