#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int num1 = n * n, num2 = 1;
        bool flip = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (flip)
                {
                    cout << num1 << ' ';
                    if (i % 2 == 0)
                        num1--;
                    else
                        num1++;
                }
                else
                {
                    cout << num2 << ' ';
                    if (i % 2 == 0)
                        num2++;
                    else
                        num2--;
                }
                flip = !flip;
            }
            cout << '\n';
            if (i % 2 == 0)
            {
                flip = false;
                if (n % 2 == 0)
                {
                    num2 += n / 2 - 1;
                    num1 = num1 - n / 2 + 1;
                }
                else
                {
                    num2 += n / 2;
                    num1 = num1 - n / 2 + 1;
                }
            }
            else
            {
                flip = true;
                if (n % 2 == 0)
                {
                    num2 += n / 2 + 1;
                    num1 = num1 - n / 2 - 1;
                }
                else
                {
                    num2 += n / 2 + 2;
                    num1 -= n / 2 + 1;
                }
            }
        }
    }
}

// 25 1 24 2 23
// 5 21 4 22 3
// 20 6 19 7 18
// 10 16 9 17 8
// 15 11 14 12 13