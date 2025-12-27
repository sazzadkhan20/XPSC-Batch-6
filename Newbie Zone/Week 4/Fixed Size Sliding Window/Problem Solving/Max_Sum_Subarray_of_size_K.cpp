#include <bits/stdc++.h>

using namespace std;

int maximumSumSubarray(vector<int> &v, int k)
{
    int sum = 0;
    int maxValue = INT_MIN;
    int i = 0, j = 0, n = v.size();
    // Fixed Size Sliding Window
    while (i < n)
    {
        sum += v[i];
        if (i - j + 1 == k) // Window Hit
        {
            // Decision
            maxValue = max(sum, maxValue);
            // Previous Window Property Remove
            sum -= v[j];
            j++;
        }
        i++;
    }
    return maxValue;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> k;
    cout << maximumSumSubarray(v, k) << '\n';
}

// Another Type--
//  #include <bits/stdc++.h>

// using namespace std;

// int maximumSumSubarray(vector<int> &v, int k)
// {
//     int sum = 0;
//     queue<int> q;
//     for (int i = 0; i < k; i++)
//     {
//         sum += v[i];
//         q.push(v[i]);
//     }
//     int maxValue = sum;
//     for (int i = k; i < v.size(); i++)
//     {
//         sum += v[i];
//         sum -= q.front();
//         q.push(v[i]);
//         q.pop();
//         if (sum > maxValue)
//         {
//             maxValue = sum;
//         }
//     }
//     return maxValue;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, k;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     cin >> k;
//     cout << maximumSumSubarray(v, k) << '\n';
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
// }