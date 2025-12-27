#include <bits/stdc++.h>

using namespace std;

bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}

void print_on_and_off_bits(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        cout << check_kth_bit_on_or_off(n, i) << ' ';
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    print_on_and_off_bits(n);
    cout << __builtin_popcountll(n) << '\n'; // O(1)
    cout << __builtin_popcount(n) << '\n';   // O(1)
    cout << __lg(n) << '\n';                 // O(1)
}