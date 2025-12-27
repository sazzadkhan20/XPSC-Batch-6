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
        if (n == 2)
        {
            cout << 2 << '\n';
            cout << 1 << ' ' << 2 << '\n';
            continue;
        }
        priority_queue<int> evenPQ;
        priority_queue<int> oddPQ;
        vector<pair<int, int>> v;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                evenPQ.push(i);
            }
            else
            {
                oddPQ.push(i);
            }
        }
        while (oddPQ.size() > 1 || evenPQ.size() > 1)
        {
            int a;
            int b;
            if (!evenPQ.empty() && !oddPQ.empty())
            {
                a = evenPQ.top();
                b = oddPQ.top();
                evenPQ.pop();
                oddPQ.pop();
                if (a > b)
                {
                    if (!evenPQ.empty())
                    {
                        // cout << "asi\n";
                        oddPQ.push(b);
                        b = evenPQ.top();
                        evenPQ.pop();
                        v.push_back({a, b});
                        int val = (a + b) / 2;
                        if (val % 2 == 0)
                        {
                            evenPQ.push(val);
                        }
                        else
                        {
                            oddPQ.push(val);
                        }
                    }
                    else
                    {
                        int val = (a + b) / 2 + 1;
                        v.push_back({a, b});
                        if (val % 2 == 0)
                        {
                            evenPQ.push(val);
                        }
                        else
                        {
                            oddPQ.push(val);
                        }
                    }
                }
                else
                {
                    if (!oddPQ.empty())
                    {
                        evenPQ.push(a);
                        a = oddPQ.top();
                        oddPQ.pop();
                        v.push_back({b, a});
                        int val = (b + a) / 2;
                        if (val % 2 == 0)
                        {
                            evenPQ.push(val);
                        }
                        else
                        {
                            oddPQ.push(val);
                        }
                    }
                    else
                    {
                        int val = (a + b) / 2 + 1;
                        v.push_back({b, a});
                        if (val % 2 == 0)
                        {
                            evenPQ.push(val);
                        }
                        else
                        {
                            oddPQ.push(val);
                        }
                    }
                }
            }
            else if (oddPQ.size() > 1)
            {
                a = oddPQ.top();
                oddPQ.pop();
                b = oddPQ.top();
                oddPQ.pop();
                int val = (a + b) / 2;
                v.push_back({a, b});
                if (val % 2 == 0)
                {
                    evenPQ.push(val);
                }
                else
                {
                    oddPQ.push(val);
                }
            }
            else if (evenPQ.size() > 1)
            {
                a = evenPQ.top();
                evenPQ.pop();
                b = evenPQ.top();
                evenPQ.pop();
                int val = (a + b) / 2;
                v.push_back({a, b});
                if (val % 2 == 0)
                {
                    evenPQ.push(val);
                }
                else
                {
                    oddPQ.push(val);
                }
            }
        }
        cout << 2 << '\n';
        for (auto [a, b] : v)
        {
            if (a % 2 == 0 && b % 2 == 0)
            {
                cout << b << " " << a << '\n';
            }
            else
            {
                cout << a << " " << b << '\n';
            }
        }
    }
}