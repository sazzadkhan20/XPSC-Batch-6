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
        int a, b, c;
        cin >> a >> b >> c;
        multiset<int> ms;
        ms.insert(a);
        ms.insert(b);
        ms.insert(c);
        int ans = 1;
        int iterate = 5;
        while (iterate--)
        {
            auto it = ms.begin();
            int val = *it;
            ms.erase(it);
            ms.insert(++val);
        }
        for (int val : ms)
        {
            ans *= val;
        }
        cout << ans << '\n';
    }
}