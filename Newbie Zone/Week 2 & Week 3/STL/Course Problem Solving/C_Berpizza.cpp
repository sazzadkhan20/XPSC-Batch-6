#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int queries;
    cin >> queries;
    int position = 1;
    vector<int> nums;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ms;
    while (queries--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int money;
            cin >> money;
            s.insert({position, money});
            ms.insert({money, -position});
            position++;
        }
        else if (x == 2)
        {
            int money = s.begin()->second, pos = s.begin()->first;
            nums.push_back(pos);
            s.erase(s.begin());
            ms.erase({money, -pos});
        }
        else
        {
            int money = ms.rbegin()->first, pos = -ms.rbegin()->second;
            nums.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos, money});
        }
    }
    for (int val : nums)
    {
        cout << val << " ";
    }
    cout << '\n';
}

// #include <bits/stdc++.h>
// #define pa pair<int, int>

// using namespace std;
// const int N = 5e5 + 5;
// int freq[N];

// class Compare
// {
// public:
//     bool operator()(pa l, pa r)
//     {
//         if (l.second == r.second)
//         {
//             return l.first > r.first;
//         }
//         return l.second < r.second;
//     }
// };

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int queries;
//     cin >> queries;
//     queue<pa> q;
//     priority_queue<pa, vector<pa>, Compare> pq;
//     int count = 0;
//     vector<int> nums;
//     while (queries--)
//     {
//         int x;
//         cin >> x;
//         if (x == 1)
//         {
//             int money;
//             cin >> money;
//             count++;
//             q.push({count, money});
//             pq.push({count, money});
//         }
//         else if (x == 2)
//         {
//             while (!q.empty())
//             {
//                 int customerNum = q.front().first;
//                 if (freq[customerNum] == 0)
//                 {
//                     nums.push_back(customerNum);
//                     freq[customerNum]++;
//                     q.pop();
//                     break;
//                 }
//                 q.pop();
//             }
//         }
//         else
//         {
//             while (!pq.empty())
//             {
//                 int customerNum = pq.top().first;
//                 if (freq[customerNum] == 0)
//                 {
//                     nums.push_back(customerNum);
//                     freq[customerNum]++;
//                     pq.pop();
//                     break;
//                 }
//                 pq.pop();
//             }
//         }
//     }
//     for (int val : nums)
//     {
//         cout << val << " ";
//     }
//     cout << '\n';
// }