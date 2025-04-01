class Solution(object):
    def isPowerOfTwo(self, n):
        for i in  range (32):
            if n==2**i:
                return "true"        
            else:
                pass
        # or

class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        return n&(n-1)==0 and n>0