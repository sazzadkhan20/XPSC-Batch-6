// Optimize solution
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, steps = 0;
    cin >> n;
    int a[5] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++)
    {
        steps += n / a[i];
        n = n % a[i];
    }
    cout << steps << '\n';
}

// Brute Force solution
//  #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, i = 0, steps = 0;
//     cin >> n;
//     int a[5] = {100, 20, 10, 5, 1};
//     while (n > 0)
//     {
//         if (n - a[i] >= 0)
//         {
//             steps++;
//             n -= a[i];
//         }
//         else
//         {
//             i++;
//         }
//     }
//     cout << steps << '\n';
// }