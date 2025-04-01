from collections import Counter  
from typing import List  

class Solution:  
    def canPartitionKSubsets(self, nums: List[int], k: int) -> bool:  
        total_sum = sum(nums)  
        
        # If the total sum is not divisible by k, it's impossible  
        if total_sum % k != 0:  
            return False  
        
        target_sum = total_sum // k  
        nums.sort(reverse=True)  # Sorting in descending order to optimize  
        subsets = [0] * k  
        
        # Define a helper function for backtracking  
        def backtrack(index):  
            if index == len(nums):  
                return all(subset == target_sum for subset in subsets)  
            
            for i in range(k):  
                if subsets[i] + nums[index] <= target_sum:  
                    subsets[i] += nums[index]  
                    if backtrack(index + 1):  
                        return True  
                    subsets[i] -= nums[index]  
                
                if subsets[i] == 0:  # No point in trying to fill other empty subsets  
                    break  
            
            return False  
        
        return backtrack(0)  









        # res_sub=[[]]

        # for num in nums:
        #     res_sub+=[elem + [num] for elem in res_sub]
        # sum_=[]
        # for i in res_sub:
        #     sum_.append(sum(i))

        # counts=Counter(sum_)
        # if counts.keys()==k:
        #     return True
        # else:
        #     return False
        
        
             
