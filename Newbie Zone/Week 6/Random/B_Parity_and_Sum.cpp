#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<ll> evenNums;
        ll HighestoddNum = INT32_MIN;
        ll minOperation = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 == 0)
            {
                evenNums.push_back(x);
            }
            else
            {
                HighestoddNum = max(HighestoddNum, x);
            }
        }
        if (evenNums.empty() || evenNums.size() == n)
        {
            cout << 0 << '\n';
            continue;
        }
        int sz = evenNums.size();
        sort(evenNums.rbegin(), evenNums.rend());
        while (true)
        {
            if (HighestoddNum >= evenNums.back())
            {
                HighestoddNum += evenNums.back();
                evenNums.pop_back();
            }
            else
            {
                HighestoddNum += evenNums.back();
            }
            minOperation++;
            if (evenNums.empty())
            {
                break;
            }
        }
        if (minOperation <= sz + 1)
            cout << minOperation << '\n';
        else
            cout << sz + 1 << '\n';
    }
}

// #include <bits/stdc++.h>
// #define ll long long

// using namespace std;

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
//         vector<ll> evenNums;
//         ll HighestoddNum = INT32_MIN, HighestEvenNum = INT32_MIN;
//         ll totalEvenSum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             ll x;
//             cin >> x;
//             if (x % 2 == 0)
//             {
//                 evenNums.push_back(x);
//                 totalEvenSum += x;
//                 HighestEvenNum = max(HighestEvenNum, x);
//             }
//             else
//             {
//                 HighestoddNum = max(HighestoddNum, x);
//             }
//         }
//         if (evenNums.empty() || evenNums.size() == n)
//         {
//             cout << 0 << '\n';
//         }
//         else
//         {
//             totalEvenSum = totalEvenSum - HighestEvenNum;
//             if (totalEvenSum > HighestEvenNum)
//             {
//                 cout << evenNums.size() << '\n';
//             }
//             else
//             {
//                 cout << evenNums.size() + 1 << '\n';
//             }
//         }
//     }
// }