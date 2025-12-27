#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<string, int> p = make_pair("Sazzad",25); //use function
    // pair<string, int> p = {"Sazzad", 250};
    // auto name = p.first;
    // auto age = p.second;
    // auto [name, age] = p;
    // cout << name << " " << age << endl;
    int n;
    cin >> n;
    pair<string, int> students[10];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].first >> students[i].second;
    }
    for (auto [name, age] : students)
    {
        cout << name << " " << age << endl;
    }
}