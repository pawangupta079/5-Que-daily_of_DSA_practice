#include<iostream>
#include<string>
using namespace std;

bool isMatch(string s, string p) {
    int sLen = s.length(), pLen = p.length();
    bool dp[sLen + 1][pLen + 1];

    // Initialize the dp array
    for (int i = 0; i <= sLen; i++) {
        for (int j = 0; j <= pLen; j++) {
            dp[i][j] = false;
        }
    }

    // Empty pattern can match with empty string
    dp[0][0] = true;

    // Handle patterns with '*' at the beginning
    for (int j = 1; j <= pLen; j++) {
        if (p[j - 1] == '*') {
            dp[0][j] = dp[0][j - 1];
        }
    }

    // Fill the dp table
    for (int i = 1; i <= sLen; i++) {
        for (int j = 1; j <= pLen; j++) {
            if (p[j - 1] == '*') {
                dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
            } else if (p[j - 1] == '?' || s[i - 1] == p[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            }
        }
    }

    return dp[sLen][pLen];
}