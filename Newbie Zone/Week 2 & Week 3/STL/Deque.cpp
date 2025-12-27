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
        // int x;
        // cin >> x;
        // dq.push_back(x);
        cin >> dq[i];
    }
    // for (auto it = dq.begin(); it != dq.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;
    // for (int x : dq)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    dq.push_front(100);
    dq.push_front(200);
    dq.push_back(5);
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " ";
    }
    cout << endl;
    dq.pop_front();
    for (int x : dq)
    {
        cout << x << " ";
    }
    cout << endl;
}