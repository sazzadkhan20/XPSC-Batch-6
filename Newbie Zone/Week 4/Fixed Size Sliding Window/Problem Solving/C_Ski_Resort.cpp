#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        int i = 0, j = 0;
        ll numberOfWays = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // Two Pointer Technique
        while (i < n)
        {
            if (v[i] > q && i - j >= k)
            {

                ll val = (i - j) - k + 1;
                numberOfWays += (1LL * val * (val + 1)) / 2;
                j = i + 1;
            }
            else if (i == n - 1 && i - j + 1 >= k && v[i] <= q)
            {
                ll val = (i - j + 1) - k + 1;
                numberOfWays += (1LL * val * (val + 1)) / 2;
                j = i + 1;
            }
            else if (v[i] > q)
            {
                j = i + 1;
            }
            i++;
        }
        cout << numberOfWays << '\n';
    }
}

// Another Technique
//  #include <bits/stdc++.h>
//  #define ll long long int

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int testCase;
//     cin >> testCase;
//     while (testCase--)
//     {
//         int n, k, q;
//         cin >> n >> k >> q;
//         vector<int> v(n);
//         int i = 0;
//         ll numberOfWays = 0, count = 0, increment = 1;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         while (i < n)
//         {
//             if (v[i] > q)
//             {
//                 count = 0, increment = 1;
//             }
//             else
//             {
//                 count++;
//                 if (count >= k)
//                 {
//                     numberOfWays += increment;
//                     increment++;
//                 }
//             }
//             i++;
//         }
//         cout << numberOfWays << '\n';
//     }
// }