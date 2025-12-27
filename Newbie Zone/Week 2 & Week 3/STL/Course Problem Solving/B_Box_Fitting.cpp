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
        ll n, w;
        cin >> n >> w;
        multiset<int> ms;
        ll totalWidth = 0;
        ll boxFittingCount = 1;
        ll currentBoxWidth = w;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ms.insert(x);
            totalWidth += x;
        }
        if (totalWidth <= w)
        {
            cout << 1 << '\n';
            continue;
        }
        while (!ms.empty())
        {
            auto it = ms.upper_bound(currentBoxWidth);
            if (it != ms.begin())
            {
                it--;
                currentBoxWidth -= *it;
                ms.erase(it);
            }
            else
            {
                boxFittingCount++;
                currentBoxWidth = w;
            }
        }
        cout << boxFittingCount << '\n';
    }
}

// #include <bits/stdc++.h>
// #define ll long long int

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int testCase;
//     cin >> testCase;
//     while (testCase--)
//     {
//         ll n, w;
//         cin >> n >> w;
//         vector<ll> width(n);
//         ll totalWidth = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> width[i];
//             totalWidth += width[i];
//         }
//         if (totalWidth <= w)
//         {
//             cout << 1 << '\n';
//         }
//         else
//         {
//             sort(width.begin(), width.end());
//             int i = 0, j = n - 1;
//             ll boxFittingCount = 0;
//             ll sum = 0;
//             while (i <= j)
//             {
//                 if (i == j)
//                 {
//                     sum += width[i];
//                     // cout << sum << endl;
//                 }
//                 else
//                 {
//                     sum += width[j] + width[i];
//                 }
//                 if (sum == w)
//                 {
//                     boxFittingCount++;
//                     // cout << sum << endl;
//                     //  cout << i << endl;
//                     sum = 0;
//                     i++;
//                     j--;
//                 }
//                 else if (sum < w)
//                 {
//                     i++;
//                     j--;
//                 }
//                 else
//                 {
//                     sum -= width[i];
//                     if (sum <= w)
//                     {
//                         boxFittingCount++;
//                         cout << i << " " << sum << endl;
//                         cout << width[j] << endl;
//                         if (i == j)
//                         {
//                             sum = width[i];
//                         }
//                         else
//                         {
//                             sum = 0;
//                         }
//                         j--;
//                     }
//                     else
//                     {
//                         sum += width[i];
//                         sum -= width[j];
//                         if (w > sum && w - sum < width[i])
//                         {
//                             // cout << sum << endl;
//                             // cout << i << endl;
//                             boxFittingCount++;
//                             // cout << i << " " << sum << endl;
//                             if (i == j)
//                             {
//                                 sum = width[i];
//                             }
//                             else
//                             {
//                                 sum = 0;
//                             }
//                             i++;
//                         }
//                         else if (w == sum)
//                         {
//                             boxFittingCount++;
//                             // cout << i << " " << sum << endl;
//                             //  cout << sum << endl;
//                             //  cout << i << endl;
//                             sum = 0;
//                             i++;
//                         }
//                         else if (sum > w)
//                         {
//                             boxFittingCount++;
//                             // cout << i << " " << sum << endl;
//                             sum = 0;
//                         }
//                         else
//                         {
//                             cout << i << " " << sum << endl;
//                             i++;
//                         }
//                     }
//                 }
//             }
//             if (sum != 0)
//             {
//                 boxFittingCount++;
//                 // cout << sum << endl;
//             }
//             cout << boxFittingCount << '\n';
//             // for (auto v : width)
//             // {
//             //     cout << v << " ";
//             // }
//         }
//     }
// }

// // 64 64 64 64 64 64 64 64 64 128