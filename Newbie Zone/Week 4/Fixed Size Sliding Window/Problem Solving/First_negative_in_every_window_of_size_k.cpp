#include <bits/stdc++.h>

using namespace std;

vector<int> firstNegInt(vector<int> &v, int k)
{
    queue<int> q;
    vector<int> temp;
    int n = v.size(), i = 0, j = 0;
    // Fixed Size Sliding Window
    while (i < n)
    {
        if (v[i] < 0)
        {
            q.push(v[i]);
        }
        if (i - j + 1 == k) // Window Hit
        {
            // Decision
            if (q.empty())
            {
                temp.push_back(0);
            }
            else
            {
                temp.push_back(q.front());
                // Remove Previous Window Property if exist
                if (v[j] == q.front())
                {
                    q.pop();
                }
            }
            j++;
        }
        i++;
    }
    return temp;
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
    vector<int> v1 = firstNegInt(v, k);
    for (int val : v1)
    {
        cout << val << ' ';
    }
}