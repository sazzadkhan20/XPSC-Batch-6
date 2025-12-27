#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, bool> mp;
    stack<string> st;
    // Input
    while (n--)
    {
        string chat;
        cin >> chat;
        st.push(chat);
    }
    // Operation
    string chat;
    while (!st.empty())
    {
        chat = st.top();
        if (mp.find(chat) == mp.end())
        {
            cout << chat << '\n';
            mp[chat] = true;
        }
        st.pop();
    }
}