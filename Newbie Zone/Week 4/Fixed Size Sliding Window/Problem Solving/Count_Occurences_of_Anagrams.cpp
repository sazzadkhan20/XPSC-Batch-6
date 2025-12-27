#include <bits/stdc++.h>

using namespace std;
int freq[26];

int search(string &pat, string &txt)
{
    int i = 0, j = 0, n = pat.length();
    int tempFreq[26];
    memset(tempFreq, 0, sizeof(tempFreq));
    memset(freq, 0, sizeof(freq));
    int countAnagrams = 0;
    for (int i = 0; i < n; i++)
    {
        int idx = pat[i] - 97;
        freq[idx]++;
    }
    // Fixed Size Sliding Window
    while (i < txt.size())
    {
        int idx = txt[i] - 97;
        tempFreq[idx]++;
        if (i - j + 1 == n) // window Hit
        {
            // Decision
            bool flag = true;
            for (int i = 0; i < 26; i++)
            {
                if (freq[i] != tempFreq[i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                countAnagrams++;
            }
            // Previous Window Property Remove
            int index = txt[j] - 97;
            tempFreq[index]--;
            j++;
        }
        i++;
    }
    return countAnagrams;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string txt, pat;
    cin >> txt >> pat;
    // cout << pat << " " << txt << endl;
    cout << search(pat, txt) << '\n';
}