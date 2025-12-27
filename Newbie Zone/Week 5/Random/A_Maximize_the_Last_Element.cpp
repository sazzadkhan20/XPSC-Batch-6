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
        int n;
        cin >> n;
        priority_queue<int> pq;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (i % 2 != 0)
            {
                pq.push(x);
            }
        }
        cout << pq.top() << '\n';
    }
}