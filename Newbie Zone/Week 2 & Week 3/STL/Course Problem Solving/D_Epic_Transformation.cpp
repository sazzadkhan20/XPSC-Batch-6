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
        map<int, int> mp;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for (auto [key, value] : mp)
        {
            pq.push(value);
        }
        while (pq.size() > 1)
        {
            int val1 = pq.top();
            pq.pop();
            int val2 = pq.top();
            pq.pop();
            val1--, val2--;
            if (val1 != 0)
            {
                pq.push(val1);
            }
            if (val2 != 0)
            {
                pq.push(val2);
            }
        }
        if (pq.empty())
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << pq.top() << '\n';
            pq.pop();
        }
    }
}

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
//         map<int, int> mp;
//         map<int, int> countMap;
//         int oddCount = 0, evenCount = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             mp[x]++;
//         }

//         for (auto [key, value] : mp)
//         {
//             countMap[value]++;
//         }
//         // for (auto it = countMap.rbegin(); it != countMap.rend(); it++)
//         // {
//         //     cout << it->first << " " << it->second << '\n';
//         // }

//         int count = 0;
//         for (auto it = countMap.rbegin(); it != countMap.rend(); it++)
//         {
//             int key = it->first;
//             int value = it->second;
//             if (value == 1)
//             {
//                 count = abs(count - key);
//             }
//             else
//             {
//                 int val = (key * value) % 2;
//                 if (abs(count - key * value) <= abs(count - val))
//                 {
//                     count = abs(count - key * value);
//                 }
//                 else
//                 {
//                     count = abs(count - val);
//                 }
//             }
//             // if (key % 2 != 0)
//             // {
//             //     if (value == 1)
//             //     {
//             //         oddCount = abs(oddCount - key);
//             //     }
//             //     else
//             //     {
//             //         int val = (key * value) % 2;
//             //         oddCount = abs(oddCount - val);
//             //     }
//             // }
//             // else
//             // {
//             //     if (value == 1)
//             //     {
//             //         evenCount = abs(evenCount - key);
//             //     }
//             //     else
//             //     {
//             //         int val = (key * value) % 2;
//             //         evenCount = abs(evenCount - val);
//             //     }
//             // }
//         }
//         cout << count << '\n';
//     }
// }