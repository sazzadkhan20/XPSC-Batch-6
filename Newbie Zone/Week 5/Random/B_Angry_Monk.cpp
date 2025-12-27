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
        int n, k;
        cin >> n >> k;
        priority_queue<ll> pq;
        ll maxNumberOfOperation = 0;
        while (k--)
        {
            ll x;
            cin >> x;
            pq.push(x);
        }
        pq.pop();
        while (!pq.empty())
        {
            maxNumberOfOperation += (2 * pq.top() - 1);
            pq.pop();
        }
        cout << maxNumberOfOperation << '\n';
    }
}