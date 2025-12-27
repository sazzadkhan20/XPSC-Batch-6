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
        string code;
        cin >> n >> code;
        int oneCount = 0, zeroCount = 0, i = 0, j = 0;
        // Sliding Window Technique
        while (i < n)
        {
            if (code[j] == '0' && code[i] == '1')
            {
                zeroCount++;
                oneCount++;
                j = i + 1;
            }
            else if (code[j] == '1' and code[i] == '1')
            {
                oneCount++;
                j++;
            }
            i++;
        }
        if (code[n - 1] == '0')
            zeroCount++;
        if (zeroCount >= oneCount)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
}