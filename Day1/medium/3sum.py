class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
    # Sort the array first
        nums.sort()
        result = []
        
        for i in range(len(nums) - 2):
            # Avoid duplicate triplets by skipping the same value for nums[i]
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            
            # Use two pointers to find two numbers that sum to -nums[i]
            left, right = i + 1, len(nums) - 1
            while left < right:
                total = nums[i] + nums[left] + nums[right]
                
                if total == 0:
                    result.append([nums[i], nums[left], nums[right]])
                    
                    # Move left pointer and avoid duplicates
                    while left < right and nums[left] == nums[left + 1]:
                        left += 1
                    # Move right pointer and avoid duplicates
                    while left < right and nums[right] == nums[right - 1]:
                        right -= 1
                    
                    left += 1
                    right -= 1
                elif total < 0:
                    left += 1
                else:
                    right -= 1
        
        return result
    