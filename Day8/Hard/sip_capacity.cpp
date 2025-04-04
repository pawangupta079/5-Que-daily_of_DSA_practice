#include <vector>  
#include <numeric>  
#include <algorithm>  

class Solution {  
public:  
    int shipWithinDays(std::vector<int>& weights, int days) {  
      
        auto canShip = [&](intcapacity) {  
            int totalWeight = 0;  
            int daysNeeded = 1;  // Start with one day  
            
            for (int weight : weights) {  
                totalWeight += weight;  
                if (totalWeight > capacity) {  
                    // Need another day if we exceed capacity  
                    daysNeeded++;  
                    totalWeight = weight;  // Reset the total to current weight  
                    if (daysNeeded > days) {  
                        return false;  // Exceeded the number of allowed days  
                    }  
                }  
            }  
            return true;  // All packages can be shipped within the required days  
        };  

        // Set binary search bounds  
        int left = *std::max_element(weights.begin(), weights.end());  // Maximum weight of any package  
        int right = std::accumulate(weights.begin(), weights.end(), 0); // Total weight of all packages  

        // Binary search for the minimum capacity  
        while (left < right) {  
            int mid = left + (right - left) / 2;  
            if (canShip(mid)) {  
                right = mid;  // Try for a smaller capacity  
            } else {  
                left = mid + 1;  // Increase the capacity  
            }  
        }  

        return left; // The minimum capacity needed  
    }  
};  