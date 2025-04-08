#include <vector>  
#include <unordered_map>  

using namespace std;  

class Solution {  
public:  
    int subarraySum(vector<int>& nums, int k) {  
        unordered_map<int, int> cumSumCount;  
        cumSumCount[0] = 1; // Initialize with sum 0 to handle the case where the subarray sum equals k itself  
        int cumSum = 0; // Cumulative sum  
        int count = 0; // Count of subarrays that sum to k  

        for (int num : nums) {  
            cumSum += num; // Update cumulative sum  

            // Check if there is a cumulative sum that equals (cumSum - k)  
            if (cumSumCount.find(cumSum - k) != cumSumCount.end()) {  
                count += cumSumCount[cumSum - k]; // Increment count by the number of times (cumSum - k) has occurred  
            }  

            // Record the occurrence of cumSum in the map  
            cumSumCount[cumSum]++;  
        }  

        return count; // Return the total count of subarrays that sum to k  
    }  
};      