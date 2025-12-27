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
        cin >> n;
        vector<int> weight(n);
        int maximumTeam = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        sort(weight.begin(), weight.end());
        // All Sum Variation
        for (int k = 2; k <= 2 * n; k++)
        {
            int i = 0, j = n - 1;
            int tempmaximumTeam = 0;
            // Two Sum technique
            while (i < j)
            {
                if (weight[i] + weight[j] == k)
                {
                    tempmaximumTeam++;
                    i++, j--;
                }
                else if (weight[i] + weight[j] < k)
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }
            maximumTeam = max(tempmaximumTeam, maximumTeam);
        }
        cout << maximumTeam << '\n';
    }
}

// Wrong Approach
// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int testCase;
//     cin >> testCase;
//     while (testCase--)
//     {
//         int n;
//         cin >> n;
//         vector<int> weight(n);
//         int maximumTeam = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> weight[i];
//         }
//         sort(weight.begin(), weight.end());
//         for (int k = 0; k < n - 1; k++)
//         {
//             int i = k, j = n - 1;
//             int tempmaximumTeam = 0, sum = weight[i] + weight[j];
//             while (i < j)
//             {
//                 if (weight[i] + weight[j] == sum)
//                 {
//                     tempmaximumTeam++;
//                     // cout << sum << endl;
//                     i++, j--;
//                 }
//                 else if (weight[i] + weight[j] < sum)
//                 {
//                     i++;
//                 }
//                 else
//                 {
//                     j--;
//                 }
//             }
//             maximumTeam = max(tempmaximumTeam, maximumTeam);
//         }
//         for (int k = n - 1; k > 0; k--)
//         {
//             int j = k, i = 0;
//             int tempmaximumTeam = 0, sum = weight[i] + weight[j];
//             while (i < j)
//             {
//                 if (weight[i] + weight[j] == sum)
//                 {
//                     tempmaximumTeam++;
//                     cout << sum << endl;
//                     i++, j--;
//                 }
//                 else if (weight[i] + weight[j] < sum)
//                 {
//                     i++;
//                 }
//                 else
//                 {
//                     j--;
//                 }
//             }
//             maximumTeam = max(tempmaximumTeam, maximumTeam);
//         }
//         cout << maximumTeam << '\n';
//     }
// }

// Wrong Approach
// // #include <bits/stdc++.h>
// // #define pa pair<int, int>

// // using namespace std;

// // bool compare(pa l, pa r)
// // {
// //     if (l.second == r.second)
// //     {
// //         return l.first < r.first;
// //     }
// //     return l.second > r.second;
// // }
// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int testCase;
// //     cin >> testCase;
// //     while (testCase--)
// //     {
// //         int n;
// //         cin >> n;
// //         vector<int> weight(n), tempWeight, combinationSum;
// //         vector<pair<int, int>> count;
// //         int maximumNum = 0;
// //         int freq[55];
// //         memset(freq, 0, sizeof(freq));
// //         for (int i = 0; i < n; i++)
// //         {
// //             cin >> weight[i];
// //             freq[weight[i]]++;
// //         }
// //         for (int i = 1; i < 55; i++)
// //         {
// //             if (freq[i] != 0)
// //             {
// //                 count.push_back({i, freq[i]});
// //             }
// //         }
// //         sort(count.begin(), count.end(), compare);
// //         for (int i = 0; i < count.size(); i++)
// //         {
// //             for (int j = 0; j < count[i].second; j++)
// //             {
// //                 tempWeight.push_back(count[i].first);
// //             }
// //         }
// //         for (int i = 1; i < n; i++)
// //         {
// //             combinationSum.push_back(tempWeight[0] + tempWeight[i]);
// //         }
// //         sort(weight.begin(), weight.end());
// //         while (combinationSum.size() > 0)
// //         {
// //             int sum = combinationSum.back();
// //             combinationSum.pop_back();
// //             int tempNum = 0;
// //             int i = 0, j = n - 1;
// //             while (i < j)
// //             {
// //                 if (weight[i] + weight[j] == sum)
// //                 {
// //                     tempNum++;
// //                     i++, j--;
// //                 }
// //                 else if (weight[i] + weight[j] < sum)
// //                 {
// //                     i++;
// //                 }
// //                 else
// //                 {
// //                     j--;
// //                 }
// //             }
// //             maximumNum = max(maximumNum, tempNum);
// //         }
// //         cout << maximumNum << '\n';
// //     }
// // }