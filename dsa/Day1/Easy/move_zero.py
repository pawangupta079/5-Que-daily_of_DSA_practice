class Solution:
    def moveZeroes(self, nums: List[int]) -> None:

        non_zero=0

        for i in range(len(nums)):
            if nums[i]!=0:
                nums[non_zero],nums[i]=nums[i],nums[non_zero]
                non_zero+=1
        return nums


        # or this way

        
        # res_len = len(nums)
        # temp_ans = []
        # for val in nums:
        #     if val != 0:
        #         temp_ans.append(val)

        # num_zero = res_len - len(temp_ans)

        # return temp_ans + [0] * num_zero


