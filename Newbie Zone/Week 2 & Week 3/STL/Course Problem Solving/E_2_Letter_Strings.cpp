#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        map<string, ll> mp;
        ll firstCharFreq[26];
        ll secondCharFreq[26];
        memset(firstCharFreq, 0, sizeof(firstCharFreq));
        memset(secondCharFreq, 0, sizeof(secondCharFreq));
        ll numOfPairs = 0;
        for (int i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            int index1 = s[0] - 97, index2 = s[1] - 97;
            firstCharFreq[index1]++;
            secondCharFreq[index2]++;
            mp[s]++;
            int count = mp[s];
            if (count != firstCharFreq[index1])
            {
                numOfPairs = numOfPairs + firstCharFreq[index1] - 1;
                if (count > 1)
                {
                    numOfPairs -= count - 1;
                }
                // cout << s << endl;
            }
            if (count != secondCharFreq[index2])
            {
                numOfPairs = numOfPairs + secondCharFreq[index2] - 1;
                if (count > 1)
                {
                    numOfPairs -= count - 1;
                }
                //  cout << count << endl;
            }
        }
        cout << numOfPairs << '\n';
    }
}

// #include <bits/stdc++.h>
// #define ll long long int

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int testCase;
//     cin >> testCase;
//     while (testCase--)
//     {
//         int n;
//         cin >> n;
//         // map<int, string> mp;
//         map<string, int> track;
//         ll firstCharFreq[26];
//         ll secondCharFreq[26];
//         memset(firstCharFreq, 0, sizeof(firstCharFreq));
//         memset(secondCharFreq, 0, sizeof(secondCharFreq));
//         ll numOfPairs = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             string s;
//             cin >> s;
//             // mp[i] = s;
//             bool flag = false;
//             if (track[s] != 0)
//             {
//                 flag = true;
//             }
//             track[s]++;
//             if (s[0] == s[1])
//             {
//                 int index = s[0] - 97;
//                 firstCharFreq[index]++;
//                 secondCharFreq[index]++;
//                 if (firstCharFreq[index] > 1)
//                 {
//                     numOfPairs += firstCharFreq[index] - 1;
//                     if (flag)
//                     {
//                         numOfPairs--;
//                     }
//                 }
//                 if (secondCharFreq[index] > 1)
//                 {
//                     numOfPairs += secondCharFreq[index] - 1;
//                     if (flag)
//                     {
//                         numOfPairs--;
//                     }
//                 }
//             }
//             else
//             {
//                 int index1 = s[0] - 97;
//                 int index2 = s[1] - 97;
//                 firstCharFreq[index1]++;
//                 secondCharFreq[index2]++;
//                 if (firstCharFreq[index1] > 1)
//                 {
//                     numOfPairs += firstCharFreq[index1] - 1;
//                     if (flag)
//                     {
//                         numOfPairs--;
//                     }
//                 }
//                 if (secondCharFreq[index2] > 1)
//                 {
//                     numOfPairs += secondCharFreq[index2] - 1;
//                     if (flag)
//                     {
//                         numOfPairs--;
//                     }
//                 }
//             }
//         }
//         cout << numOfPairs << '\n';
//     }
// }