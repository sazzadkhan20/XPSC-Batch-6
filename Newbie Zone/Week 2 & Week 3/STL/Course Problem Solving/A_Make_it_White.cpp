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
        string s;
        cin >> n >> s;
        int firstBlack = s.find('B');
        int lastBlack = s.rfind('B');
        cout << lastBlack - firstBlack + 1 << endl;
    }
}