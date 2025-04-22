#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int max_len = 0;
        int i = 0; // Start of window

        for (int j = 0; j < s.length(); j++) {
            // If duplicate found, shrink window from left
            while (seen.find(s[j]) != seen.end()) {
                seen.erase(s[i]);
                i++;
            }

            seen.insert(s[j]); // Add current char to the set
            max_len = max(max_len, j - i + 1);
        }

        return max_len;
    }
};
