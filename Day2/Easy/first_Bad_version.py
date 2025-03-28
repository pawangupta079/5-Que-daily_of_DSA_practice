# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        left, right = 1, n  # Define the search range
        
        while left < right:  # Continue until the pointers meet
            mid = left + (right - left) // 2  # Avoid overflow with this formula
            if isBadVersion(mid):
                right = mid  # Narrow the search space to the left
            else:
                left = mid + 1  # Narrow the search space to the right
        
        return left  # `left` now points to the first bad version
