#include <vector>  
#include <unordered_map>  

using namespace std;  

class Solution {  
public:  
    int subarraySum(vector<int>& nums, int k) {  
        unordered_map<int, int> cumSumCount;  
        cumSumCount[0] = 1; // Initialize with sum 0 to handle the case where the subarray sum equals k …k) has occurred  
            }  

            // Record the occurrence of cumSum in the map  
            cumSumCount[cumSum]++; 
        }  

        return count; // Return the total count of subarrays that sum to k  
    }  
};