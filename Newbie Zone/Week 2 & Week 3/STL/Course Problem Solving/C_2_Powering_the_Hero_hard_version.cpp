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
        cin >> n;
        priority_queue<ll> bonusCard;
        ll totalPower = 0;
        while (n--)
        {
            ll x;
            cin >> x;
            if (x == 0 && !bonusCard.empty())
            {
                totalPower += bonusCard.top();
                bonusCard.pop();
            }
            else
            {
                bonusCard.push(x);
            }
        }
        cout << totalPower << '\n';
    }
}