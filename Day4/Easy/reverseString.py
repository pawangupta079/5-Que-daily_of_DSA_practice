from typing import List

class Solution:
    def reverseString(self, s: List[str]) -> None:
        def helper(left: int, right: int) -> None:
            if left >= right:
                return
            # Swap the characters at left and right indices
            s[left], s[right] = s[right], s[left]
            # Recursive call for the next pair
            helper(left + 1, right - 1)
        
        # Start the recursion
        helper(0, len(s) - 1)




# mine


class Solution:
    def reverseString(self, s: List[str]) -> None:
        def helper(l,r):
            if l>=r:
                return 
            s[l],s[r]=s[r],s[l]
            helper(l+1,r-1)
            
        helper(0,len(s)-1)