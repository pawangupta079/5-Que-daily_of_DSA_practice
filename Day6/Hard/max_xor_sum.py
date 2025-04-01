class Solution:
    
    def findMaximumXOR(self, nums: List[int]) -> int:
        max_xor = 0
        mask = 0
        
        # Iterate over all bits from 31 to 0
        for i in range(31, -1, -1):
            # Mask to get prefixes up to current bit
            mask |= (1 << i)
            prefixes = set()
            
            # Store prefixes of all numbers up to current bit
            for num in nums:
                prefixes.add(num & mask)
            
            # Candidate for max XOR with current bit set
            candidate = max_xor | (1 << i)
            
            # Check if there exist two prefixes whose XOR equals the candidate
            for prefix in prefixes:
                if (candidate ^ prefix) in prefixes:
                    max_xor = candidate
                    break
        
        return max_xor



        # res=[]
        
        # for i in range(len(nums)):
        #     for j in range(i+1,len(nums)):
        #         res.append(nums[i]^nums[j])
        # return max(res)
        