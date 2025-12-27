#include <bits/stdc++.h>

using namespace std;
const int N = 5005;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int boxes[N];
    int boxCount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> boxes[i];
    }
    sort(boxes, boxes + n, greater<int>());
    int i = n - 1, j = n - 2;
    while (i > 0 && j >= 0)
    {
        if (boxes[i] != boxes[j])
        {
            boxCount++;
            i--;
        }
        j--;
    }
    cout << n - boxCount << '\n';
}