#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int maxValue = 1 << 15;

bool isPalindrome(int n)
{
    string s = to_string(n);
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++, j--;
    }
    return true;
}

vector<int> all_palindrome(int n)
{
    vector<int> v;
    for (int i = 0; i <= n; i++)
    {
        if (isPalindrome(i))
            v.push_back(i);
    }
    return v;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> palindrome = all_palindrome(maxValue);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n), count(maxValue, 0);
        ll ans = n;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            count[v[i]]++;
        }
        for (int val : v)
        {
            for (int p : palindrome)
            {
                int curr = (val ^ p);
                ans += count[curr];
            }
        }
        cout << ans / 2 << '\n';
    }
}

// #include <bits/stdc++.h>
// #define ll long long int

// using namespace std;

// bool isPalindrome(int n)
// {
//     string s = to_string(n), t;
//     t = s;
//     reverse(t.begin(), t.end());
//     return t == s;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         ll ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         // Brute Force O(n^2)
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i; j < n; j++)
//             {
//                 int curr = v[i] ^ v[j];
//                 if (isPalindrome(curr))
//                 {
//                     cout << v[i] << ' ' << v[j] << endl;
//                     ans++;
//                 }
//             }
//         }
//         cout << ans << '\n';
//     }
// }
