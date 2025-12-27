#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // tuple<string, int, int, string> student = make_tuple("Sazzad", 1, 25, "01572838743");
    // tuple<string, int, int, string> student = {"Sazzad", 1, 25, "01572838743"};
    // cout << get<0>(student) << " " << get<1>(student) << " " << get<2>(student) << " " << get<3>(student) << endl;
    // auto [name, age, roll, phoneNum] = student;
    // cout << name << endl;
    // cout << age << endl;
    // cout << roll << endl;
    // cout << phoneNum << endl;

    int n;
    cin >> n;
    vector<tuple<string, int, int>> student(n);
    for (int i = 0; i < n; i++)
    {
        cin >> get<0>(student[i]) >> get<1>(student[i]) >> get<2>(student[i]);
    }
    for (auto [name, roll, age] : student)
    {
        cout << name << " " << roll << " " << age << endl;
    }
}