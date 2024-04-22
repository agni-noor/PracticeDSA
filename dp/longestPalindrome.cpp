#include <bits/stdc++.h>
using namespace std;
int dp[100][100];

int longestPalSubSequence(string &s1, string &s2, int n1, int n2)
{
    if (n1 == 0 || n2 == 0)
        return 0;
    if (dp[n1][n2] != -1)
    {
        return dp[n1][n2];
    }
    if (s1[n1 - 1] == s2[n2 - 1])
    {
        return dp[n1][n2] = 1 + longestPalSubSequence(s1, s2, n1 - 1, n2 - 1);
    }
    else
    {
        return dp[n1][n2] = max(longestPalSubSequence(s1, s2, n1 - 1, n2), longestPalSubSequence(s1, s2, n1, n2 - 1));
    }
}
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    dp[n][n];
    memset(dp, -1, sizeof(dp));
    string r_s = s;
    reverse(s.begin(), s.end());
    cout << "Longest Palindrome subsequence: " << longestPalSubSequence(s, r_s, n, n) << endl;

    return 0;
}