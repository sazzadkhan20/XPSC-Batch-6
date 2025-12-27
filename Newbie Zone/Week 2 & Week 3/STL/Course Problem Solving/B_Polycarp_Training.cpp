#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> ms;
    int days = 0;
    int problems = 1;
    while (n--)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    while (!ms.empty())
    {
        auto lb = ms.lower_bound(problems);
        if (lb != ms.end())
        {
            days++;
            ms.erase(lb);
        }
        else
        {
            break;
        }
        problems++;
    }
    cout << days << '\n';
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     multiset<int> ms;
//     int days = 0;
//     int k = 1;
//     while (n--)
//     {
//         int x;
//         cin >> x;
//         ms.insert(x);
//     }

//     for (int val : ms)
//     {
//         if (val >= k)
//         {
//             days++;
//             k++;
//         }
//     }
//     cout << days << '\n';
// }