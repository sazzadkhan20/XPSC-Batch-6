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
        string num;
        cin >> num;
        if (num.length() == 1 || num.length() == 2)
        {
            cout << num.length() - 1 << endl;
            continue;
        }
        int lastNumIndex = -1;
        int countNum = -1, lastNumCout = 0;
        for (int i = num.length() - 1; i >= 0; i--)
        {
            countNum++;
            if (num[i] != '0')
            {
                lastNumIndex = i;
                break;
            }
        }
        for (int i = 0; i < lastNumIndex; i++)
        {
            if (num[i] != '0')
            {
                lastNumCout++;
            }
        }
        cout << lastNumCout + countNum << endl;
    }
}