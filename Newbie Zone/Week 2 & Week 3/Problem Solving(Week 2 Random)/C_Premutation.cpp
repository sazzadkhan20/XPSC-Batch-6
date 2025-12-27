#include <bits/stdc++.h>

using namespace std;
const int N = 105;

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
        int permt[N][N];
        int freq[N] = {0};
        int index[N];
        memset(index, -1, sizeof(index));
        vector<int> permutation;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
                cin >> permt[i][j];
        }
        index[0] = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                freq[permt[j][i]]++;
                if (index[permt[j][i]] == -1)
                {
                    index[permt[j][i]] = i;
                }
            }
            int highestFreq = 0;
            for (int i = 1; i <= n; i++)
            {
                if (freq[i] != 0 && freq[i] >= freq[highestFreq] && index[i] <= index[highestFreq])
                {
                    highestFreq = i;
                }
            }
            permutation.push_back(highestFreq);
            freq[highestFreq] = 0;
        }
        int highestFreq = 0;
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] != 0 && freq[i] > freq[highestFreq])
            {
                highestFreq = i;
            }
        }
        permutation.push_back(highestFreq);
        for (int val : permutation)
            cout << val << " ";
        cout << endl;
    }
}

// Wrong Answer--

//  #include <bits/stdc++.h>

// using namespace std;
// const int N = 105;

// class Permutation
// {
// public:
//     int val;
//     int index;
//     int count;
//     int serail;
//     Permutation()
//     {
//     }
//     Permutation(int v, int i, int s)
//     {
//         val = v;
//         index = i;
//         count = 0;
//         serail = s;
//     }
// };

// bool compare(Permutation l, Permutation r)
// {
//     if (l.index == r.index)
//     {
//         if (l.count == r.count)
//             return l.serail < r.serail;
//         return l.count > r.count;
//     }
//     return l.index < r.index;
// }

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
//         int permt[N][N];
//         Permutation p[N];
//         int freq[N] = {0};
//         int counter = 1;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n - 1; j++)
//                 cin >> permt[i][j];
//         }
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (freq[permt[j][i]] == 0)
//                 {
//                     p[permt[j][i]] = Permutation(permt[j][i], i, counter);
//                     counter++;
//                 }
//                 else
//                     p[permt[j][i]].count++;
//                 freq[permt[j][i]]++;
//             }
//         }
//         n++;
//         sort(p + 1, p + n, compare);
//         for (int i = 1; i < n; i++)
//             cout << p[i].val << " ";
//         cout << endl;
//     }
// }