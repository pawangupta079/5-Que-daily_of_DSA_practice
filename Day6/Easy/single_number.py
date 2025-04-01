class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        res=0
        for num in nums:
            res ^= num
        return res
    

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        result=0
        for i in range(len(nums)):
            result ^= nums[i]
        return result