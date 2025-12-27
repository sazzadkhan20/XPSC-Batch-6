#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // set<int> s // Complexity O(logn) all Constant
    // Data type(int,float,double)
    // set<string> s // Complexity O(k*logn) not Constant
    // Data type (k = string Size)
    // set<vector<int>> s // Complexity O(m*logn) not Constant
    // Data type (m = vector Size)
    // set<pair<string,string>> s // Complexity O((k+p)*logn) not Constant
    // Data type (k = string 1 Size, p  = string 2 Size)

    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logn)
    }
    // auto it = s.begin(); //O(1)
    // it++;
    // cout << *it << '\n';

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << '\n';

    // Find Operation
    //  auto it = s.find(10); // O(logn)
    //  if (it == s.end())
    //  {
    //      cout << "Not Found\n";
    //  }
    //  else
    //  {
    //      cout << *it << " Found\n";
    //  }

    // Erase Operation
    int x;
    cin >> x;
    // One Process--
    // auto it = s.find(x); // O(logn)
    // if (it != s.end())
    // {
    //     s.erase(x); // O(logn)
    //     // Total Complexity - O(2*logn)
    // }

    // Another Process--
    // cout << s.count(20) << endl; // O(logn)
    // if (s.count(x) != 0) // O(logn)
    // {
    //     s.erase(x); // O(logn)
    //     // Total Complexity - O(2*logn)
    // }

    // Another Process - Complexity O(2*logn)
    // auto it = s.find(x); // O(logn)
    // if (it != s.end())
    // {
    //     s.erase(it); // O(logn)
    //     // Total Complexity O(2*logn)
    // }

    // Lower Bound
    // auto it = s.lower_bound(x); // O(logn)
    // if (it == s.end())
    // {
    //     cout << "END\n";
    // }
    // else
    // {
    //     cout << *it << '\n';
    // }

    // Upper Bound
    auto it = s.upper_bound(x); // O(logn)
    if (it == s.end())
    {
        cout << "END\n";
    }
    else
    {
        cout << *it << '\n';
    }
    for (int data : s)
    {
        cout << data << " ";
    }
}