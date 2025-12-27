#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m);
    ll numberOfPairs = 0;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        int current = v1[i], count1 = 0, count2 = 0;
        while (i < n && current == v1[i])
        {
            count1++;
            i++;
        }
        while (j < m && current > v2[j])
        {
            j++;
        }
        while (j < m && current == v2[j])
        {
            count2++;
            j++;
        }
        numberOfPairs += (1LL * count1 * count2);
    }
    cout << numberOfPairs << '\n';
}

// #include <bits/stdc++.h>
// #define ll long long int

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, m;
//     cin >> n >> m;
//     vector<int> v1(n), v2(m);
//     ll numberOfPairs = 0;
//     int counter = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v1[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> v2[i];
//     }
//     int i = 0, j = 0;
//     while (j < m)
//     {
//         if (i < n && v1[i] == v2[j])
//         {
//             counter++;
//             i++;
//         }
//         else if (i < n && v1[i] < v2[j])
//         {
//             i++;
//         }
//         else
//         {
//             numberOfPairs += counter;
//             j++;
//             if (j < m && v2[j] != v2[j - 1])
//             {
//                 counter = 0;
//             }
//         }
//     }
//     cout << numberOfPairs << '\n';
// }