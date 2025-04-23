#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        for (string word : strs) {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());  // Step 1: Sort the word
            anagramGroups[sortedWord].push_back(word);   // Step 2: Group by sorted word
        }

        vector<vector<string>> result;

        for (auto& pair : anagramGroups) {
            result.push_back(pair.second);  // Step 3: Collect all anagram groups
        }

        return result;
    }
};
