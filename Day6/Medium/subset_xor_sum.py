# 1.
from typing import List  
class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        sub=[[]]
        for num in nums:
            sub +=[elem + [num] for elem in sub]
        xored=[]
        for i in sub:
            temp_=0
            for j in i:
                temp_ ^= j
            xored.append(temp_)
        return sum(xored)

# # 2.
# from typing import List  
# class Solution:  
#     def subsetXORSum(self, nums: List[int]) -> int:  
#         sub = [[]]  
#         for num in nums:  
#             sub += [elem + [num] for elem in sub]  
#         xored = []  
#         for i in sub:  
#             temp_ = 0  
#             for j in i:  
#                 temp_ ^= j  
#             xored.append(temp_)          
#         return sum(xored)  
