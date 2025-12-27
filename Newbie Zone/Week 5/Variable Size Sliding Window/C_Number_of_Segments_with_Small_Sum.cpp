#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll sum, tempSum = 0, numberOfSegments = 0;
    cin >> n >> sum;
    vector<int> v(n);
    int i = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // Variable Size Sliding Window
    while (i < n)
    {
        tempSum += v[i];
        if (tempSum <= sum)
        {
            numberOfSegments += (i - j + 1);
        }
        else
        {
            while (tempSum > sum)
            {
                tempSum -= v[j];
                j++;
            }
            if (tempSum <= sum)
            {
                numberOfSegments += (i - j + 1);
            }
        }
        i++;
    }
    cout << numberOfSegments << '\n';
}

// Another Technique
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
//     vector<int> v(n);
//     int i = 0, j = 0, prev_window_count = 0, count = 0;
//     ll numberOfSegments = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     while (i < n)
//     {
//         tempSum += v[i];
//         if (tempSum <= sum)
//         {
//             count++;
//         }
//         else
//         {
//             numberOfSegments += (1LL * count * (count + 1)) / 2;
//             numberOfSegments -= (1LL * prev_window_count * (prev_window_count + 1)) / 2;
//             prev_window_count = count;
//             // cout << count << ' ' << prev_window_count << endl;
//             do
//             {
//                 tempSum -= v[j];
//                 prev_window_count--;
//                 count--;
//                 j++;
//             } while (tempSum > sum);
//             if (j > i)
//             {
//                 count = 0;
//                 prev_window_count = 0;
//             }
//             else
//             {
//                 count++;
//             }
//             // cout << count << ' ' << prev_window_count << endl;
//         }
//         i++;
//     }
//     numberOfSegments += (1LL * count * (count + 1)) / 2;
//     numberOfSegments -= (1LL * prev_window_count * (prev_window_count + 1)) / 2;
//     cout << numberOfSegments << '\n';
// }