class Solution:
    def findMedianSortedArrays(nums1, nums2):
        # arr=sorted(nums1+nums2,reverse=False)
        # if len(arr)%2!=0:
        #     return arr[len(arr)//2] 
        # else:
        #     return (arr[len(arr)//2]+arr[len(arr)//2+1])/2
        n=len(nums1+nums2)
        merged=sorted(nums1+nums2)
        n = len(merged)
        if n % 2 == 1:
            return merged[n // 2]
        else:
            return (merged[n // 2 - 1] + merged[n // 2]) / 2.0
