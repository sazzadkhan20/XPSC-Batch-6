#include <bits/stdc++.h>
#define ll long long int

using namespace std;
const int N = 1e5 + 5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll nums[N];
    ll minOddValue = INT32_MAX;
    ll totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        totalSum += nums[i];
        if (nums[i] % 2 != 0 && minOddValue > nums[i])
            minOddValue = nums[i];
    }
    if (totalSum % 2 != 0)
        totalSum -= minOddValue;
    cout << totalSum << endl;
}