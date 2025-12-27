#include <bits/stdc++.h>

using namespace std;
const int N = 105;

int cypher(string s, int val)
{
    for (char x : s)
    {
        if (x == 'D')
            val++;
        if (x == 'U')
            val--;
        if (val == 10)
            val = 0;
        if (val == -1)
            val = 9;
    }
    return val;
}

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
        int nums[N];
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            string s;
            cin >> x >> s;
            v.push_back(s);
        }
        vector<int> initSeq;
        for (int i = 0; i < n; i++)
            initSeq.push_back(cypher(v[i], nums[i]));
        for (int val : initSeq)
            cout << val << " ";
        cout << endl;
    }
}