class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int i = 0; // Pointer for s
            int j = 0; // Pointer for t
    
            while (i < s.length() && j < t.length()) {
                if (s[i] == t[j]) {
                    i++; // Move in s if characters match
                }
                j++; // Always move in t
            }
    
            return i == s.length(); // If i reached end of s, all characters matched
        }
    };
int main() {
    Solution solution;
    string s = "abc";
    string t = "ahbgdc";
    bool result = solution.isSubsequence(s, t);
    cout << (result ? "true" : "false") << endl; // Output: true
    return 0;
}
// Time Complexity: O(n), where n is the length of t
// Space Complexity: O(1), no extra space used    