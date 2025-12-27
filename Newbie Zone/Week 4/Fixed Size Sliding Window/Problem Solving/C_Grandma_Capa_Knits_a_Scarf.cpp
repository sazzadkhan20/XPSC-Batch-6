#include <bits/stdc++.h>

using namespace std;

int palindrome_check(string s, int i, int j, char baseChar)
{
    int numberOfErasedLetters = 0;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            if (s[i] == baseChar)
            {
                numberOfErasedLetters++;
                j++;
            }
            else if (s[j] == baseChar)
            {
                numberOfErasedLetters++;
                i--;
            }
            else
            {
                numberOfErasedLetters = -1;
                break;
            }
        }
        i++, j--;
    }
    return numberOfErasedLetters;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        string s;
        cin >> n >> s;
        int numberOfErasedLetters = 0;
        int count = 0;
        char c;
        int i = 0, j = n - 1;
        while (i <= j)
        {
            if (s[i] != s[j])
            {
                int ans1 = palindrome_check(s, i, j, s[i]);
                int ans2 = palindrome_check(s, i, j, s[j]);
                if (ans1 == -1 or ans2 == -1)
                {
                    numberOfErasedLetters = max(ans1, ans2);
                }
                else
                {
                    numberOfErasedLetters = min(ans1, ans2);
                }
                break;
            }
            i++, j--;
        }
        cout << numberOfErasedLetters << '\n';
    }
}

// #include <bits/stdc++.h>

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
//         string s;
//         cin >> n >> s;
//         int numberOfErasedLetters = 0;
//         int count = 0;
//         char c;
//         int i = 0, j = n - 1;
//         while (i <= j)
//         {
//             if (s[i] != s[j] and count == 0)
//             {
//                 if (s[i + 1] == s[j])
//                 {
//                     numberOfErasedLetters++;
//                     c = s[i];
//                     i++;
//                 }
//                 else if (s[i] == s[j - 1])
//                 {
//                     numberOfErasedLetters++;
//                     c = s[j];
//                     j--;
//                 }
//                 else
//                 {
//                     if (s[i] == s[i + 1] && s[j] == s[j - 1])
//                     {
//                         numberOfErasedLetters++;
//                         c = s[i];
//                     }
//                     else if (s[j] == s[j - 1] && s[i] == s[i + 1])
//                     {
//                         numberOfErasedLetters++;
//                         c = s[j];
//                     }
//                     else
//                     {
//                         numberOfErasedLetters = -1;
//                         break;
//                     }
//                 }
//                 count++;
//             }
//             else if (s[i] != s[j])
//             {
//                 if (s[i + 1] == s[j] && s[i] == c)
//                 {
//                     numberOfErasedLetters++;
//                     i++;
//                 }
//                 else if (s[i] == s[j - 1] && s[j] == c)
//                 {
//                     // cout << "asi\n";
//                     numberOfErasedLetters++;
//                     j--;
//                 }
//                 else
//                 {
//                     if (s[i] == c && s[i] == s[i + 1])
//                     {
//                         // cout << i << "\n";
//                         numberOfErasedLetters++;
//                     }
//                     else if (s[j] == c && s[j] == s[j - 1])
//                     {
//                         //cout << i << "\n";
//                         numberOfErasedLetters++;
//                     }
//                     else
//                     {
//                         numberOfErasedLetters = -1;
//                         break;
//                     }
//                 }
//             }
//             i++, j--;
//         }
//         cout << numberOfErasedLetters << '\n';
//     }
// }