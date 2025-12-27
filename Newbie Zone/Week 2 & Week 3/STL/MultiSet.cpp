#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    multiset<int> ms;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        ms.insert(x); // O(logn)
    }
    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << '\n';
    int x;
    cin >> x;

    // Find Operation
    //  auto it = ms.find(x); // O(logn)
    //  if (it == ms.end())
    //  {
    //      cout << "Not Found\n";
    //  }
    //  else
    //  {
    //      cout << *it << '\n';
    //  }

    // Erase Operation
    // One Process -- All Same Value Delete O(2 * logn + k)
    // auto it = ms.find(x); // O(logn)
    // if (it != ms.end())
    // {
    //     ms.erase(x); // O(k + logn) k = Num of occurrance of x
    // Total Complexity -- O(2 * logn + k) // if string O(2p*logn + k) p = string Size
    // }

    // Another Process -- One Value Delete
    // auto it = ms.find(x); // O(logn)
    // if (it != ms.end())
    // {
    //     ms.erase(it); // O(logn)
    //     // Total Complexity -- O(2*logn)
    // }
    // cout << ms.count(x) << endl; // O(k+logn) k = Num of occurrance of x

    // // Lower Bound
    // auto it = ms.lower_bound(x); // O(logn)
    // if (it != ms.end())
    // {
    //     // cout<<*it<<endl;
    //     ms.erase(it); // O(logn)
    // }

    // Upper Bound
    auto it = ms.upper_bound(x); // O(logn)
    if (it != ms.end())
    {
        // cout<<*it<<endl;
        ms.erase(it); // O(logn)
    }

    for (auto data : ms)
    {
        cout << data << " ";
    }
}