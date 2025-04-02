class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        ans_num=nums1+nums2

        sor=sorted(ans_num)
        n=len(sor)
        if len(sor)%2==1:
            return sor[n//2]
        else:
            return (sor[n // 2 - 1] + sor[n // 2]) / 2.0
        