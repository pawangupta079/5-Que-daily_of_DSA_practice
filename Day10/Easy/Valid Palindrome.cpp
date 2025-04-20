class Solution {
    public:
        bool isPalindrome(string s) {
            string cleaned = "";
            
            // Step 1: Clean the string
            for (char ch : s) {
                if (isalnum(ch)) {
                    cleaned += tolower(ch);
                }
            }
    
            // Step 2: Check if cleaned string is a palindrome
            int left = 0, right = cleaned.size() - 1;
            while (left < right) {
                if (cleaned[left] != cleaned[right])
                    return false;
                left++;
                right--;
            }
            
            return true;
        }
    };
    