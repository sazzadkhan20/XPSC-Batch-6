#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }
    int sereja = 0, dima = 0;
    int counter = 0;
    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back();
        int mx = max(left, right);
        if (counter % 2 == 0)
            sereja += mx;
        else
            dima += mx;
        if (mx == left)
            dq.pop_front();
        else
            dq.pop_back();
        counter++;
    }
    cout << sereja << " " << dima << '\n';
}