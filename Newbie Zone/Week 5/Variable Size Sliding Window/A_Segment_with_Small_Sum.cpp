#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll sum, tempSum = 0;
    cin >> n >> sum;
    vector<int> v(n);
    int i = 0, j = 0, longestSegment = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // Variable Size Sliding Window
    while (i < n)
    {
        tempSum += v[i];
        if (tempSum <= sum) // Condition Hit
        {
            // Decision
            longestSegment = max(longestSegment, i - j + 1);
        }
        else
        {
            // Previous Window Property Remove
            tempSum -= v[j];
            j++;
        }
        i++;
    }
    cout << longestSegment << '\n';
}

// #include <bits/stdc++.h>
// #define ll long long int

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     ll sum, tempSum = 0;
//     cin >> n >> sum;
//     vector<ll> v(n);
//     int i = 0, j = 0, longestSegment = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     while (i < n)
//     {
//         tempSum += v[i];
//         if (i == n - 1 && tempSum < sum)
//         {
//             longestSegment = max(longestSegment, i - j + 1);
//         }
//         else if (tempSum >= sum) // Condition Hit
//         {
//             // Decision
//             if (i != j)
//             {
//                 // cout << i << " " << j << endl;
//                 if (tempSum == sum)
//                 {
//                     longestSegment = max(longestSegment, i - j + 1);
//                 }
//                 else
//                 {
//                     longestSegment = max(longestSegment, i - j);
//                 }
//             }
//             else
//             {
//                 if (tempSum == sum)
//                 {
//                     longestSegment = max(longestSegment, 1);
//                 }
//             }
//             // Previuos Window Property Remove
//             tempSum -= v[j];
//             j++;
//         }
//         i++;
//     }
//     cout << longestSegment << '\n';
// }