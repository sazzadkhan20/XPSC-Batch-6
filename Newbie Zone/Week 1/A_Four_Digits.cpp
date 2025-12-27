#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s = to_string(n);
    vector<char> v(4, '0');
    int j = 3;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        v[j] = s[i];
        j--;
    }
    for (char c : v)
        cout << c;
    cout << endl;
}