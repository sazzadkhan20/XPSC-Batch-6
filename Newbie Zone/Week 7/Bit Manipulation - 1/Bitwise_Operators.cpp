#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 7, b = 20, c = 5, d = 10, e = 15;
    cout << (a & b) << '\n';  // AND Operator
    cout << (a | b) << '\n';  // OR Operator
    cout << (a ^ b) << '\n';  // XOR Operator
    cout << ~(a) << '\n';     // OR Operator
    cout << (a << 2) << '\n'; // 2 Left Shift
    cout << (a >> 2) << '\n'; // 2 Right Shift

    cout << (a & b ^ c | d & e) << '\n'; // Nested Precedence - AND -> XOR -> OR
}