#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    int left = 0, right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}

// Function to find the longest palindrome in the array
string longestPalindromeInArray(const vector<string>& arr) {
    string longest = "";
    for (const string& word : arr) {
        if (isPalindrome(word) && word.length() > longest.length()) {
            longest = word;
        }
    }
    return longest;
}

int main() {
    vector<string> words = {"hello", "racecar", "world", "madam", "noon"};
    string result = longestPalindromeInArray(words);
    if (!result.empty())
        cout << "Longest palindrome: " << result << endl;
    else
        cout << "No palindrome found in the array." << endl;
    return 0;
}
