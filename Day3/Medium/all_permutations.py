import itertools

class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:

        # first method
            return list(itertools.permutations(nums))



#second method
def iterative_permutations(nums):  
        result = [[]]  # Step 1: Start with an initial list containing an empty list  

        for element in nums:  # Step 2: Iterate through each element in the original nums  
            new_permutations = []  # Step 3: Prepare a list to hold new permutations  

            for perm in result:  # Step 4: Iterate through the existing permutations in the result  
                for i in range(len(perm) + 1):  # Step 5: For each permutation, consider every position to insert the new element  
                    # Step 6: Create new permutations by inserting the current element at position i  
                    new_permutations.append(perm[:i] + [element] + perm[i:])  

            result = new_permutations  # Step 7: Update result with new permutations  

        return result  # Step 8: Return the complete list of permutations  
  
# Example usage  
nums = [1, 2, 3]  
permutations = iterative_permutations(nums)  # Call the function with the nums  
for p in permutations:  
    print(p)  # Print each permutation  