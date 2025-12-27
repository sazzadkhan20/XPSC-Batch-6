#include <bits/stdc++.h>

using namespace std;

bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}

void print_on_and_off_bits(int n)
{
    for (int i = 7; i >= 0; i--)
    {
        cout << check_kth_bit_on_or_off(n, i) << ' ';
    }
    cout << '\n';
}
int turn_on_kth_bit(int n, int k)
{
    return n | (1 << k);
}

int turn_off_kth_bit(int n, int k)
{
    return n & (~(1 << k));
}

int toggle_kth_bit(int n, int k)
{
    return n ^ (1 << k);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    // if (check_kth_bit_on_or_off(n, k))
    // {
    //     cout << "On\n";
    // }
    // else
    // {
    //     cout << "Off\n";
    // }
    print_on_and_off_bits(n);
    // cout << turn_on_kth_bit(n, k) << '\n';
    // cout << turn_off_kth_bit(n, k) << '\n';
    cout << toggle_kth_bit(n, k) << '\n';
}