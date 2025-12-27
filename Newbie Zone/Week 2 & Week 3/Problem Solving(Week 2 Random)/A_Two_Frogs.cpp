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
        int n, alice, bob;
        cin >> n >> alice >> bob;
        bool flag = true;
        if (alice > bob)
            swap(alice, bob);
        while (1)
        {
            if (flag)
            {
                alice++;
                if (alice == bob)
                {
                    cout << "NO\n";
                    break;
                }
            }
            else
            {
                bob--;
                if (alice == bob)
                {
                    cout << "YES\n";
                    break;
                }
            }
            flag = !flag;
        }
    }
}