class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        l=[]
        for num in nums:
            l.append(num**2)

        return sorted(l,reverse=False)

        