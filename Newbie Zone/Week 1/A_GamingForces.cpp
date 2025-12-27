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
        vector<int> health;
        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                health.push_back(x);
            else
                counter++;
        }
        int sz = health.size();
        if (sz % 2 == 0)
            cout << sz / 2 + counter << endl;
        else
        {
            sz /= 2;
            cout << sz + counter + 1 << endl;
        }
    }
}