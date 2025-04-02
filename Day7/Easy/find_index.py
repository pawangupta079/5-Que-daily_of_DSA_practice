from typing import List

class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def findFirst(nums, target):
            left, right = 0, len(nums) - 1
            first = -1  # Default if not found
            while left <= right:
                mid = (left + right) // 2
                if nums[mid] == target:
                    first = mid  # Possible first occurrence
                    right = mid - 1  # Search left for earlier occurrence
                elif nums[mid] < target:
                    left = mid + 1
                else:
                    right = mid - 1
            return first
        
        def findLast(nums, target):
            left, right = 0, len(nums) - 1
            last = -1  # Default if not found
            while left <= right:
                mid = (left + right) // 2
                if nums[mid] == target:
                    last = mid  # Possible last occurrence
                    left = mid + 1  # Search right for later occurrence
                elif nums[mid] < target:
                    left = mid + 1
                else:
                    right = mid - 1
            return last
        
        first = findFirst(nums, target)
        last = findLast(nums, target)

        return [first, last]





# class Solution:
#     def searchRange(self, nums: List[int], target: int) -> List[int]:
        # left,right=0,len(nums)-1

        # while(left<=right):
        #     if nums[left]==target and nums[right]==target:
                
        #         return [left,right]
    
        #     if nums[left]!= target:
        #         left+=1
        #     elif nums[right]!=target:
        #         right-=1
        
            

        