# counting thed 1 after converting the number to binary 

class Solution:
    def hammingWeight(self, n: int) -> int:

        bin_=str(bin(n))
        ct=0
        for i in bin_:
            if i =="1":
                ct+=1
        return ct