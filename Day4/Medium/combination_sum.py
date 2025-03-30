#  Need practice nhi hua solve

from typing import List

class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        
        def backtrack(start, combination, total):
            # Base case: if sum equals target, add to result
            if total == target:
                res.append(list(combination))
                return
            
            # If sum exceeds target, stop (backtrack)
            if total > target:
                return
            
            # Try each candidate starting from 'start' index
            for i in range(start, len(candidates)):
                combination.append(candidates[i])  # Choose
                backtrack(i, combination, total + candidates[i])  # Recur
                combination.pop()  # Undo choice (Backtrack)

        backtrack(0, [], 0)
        return res

# Testing the function
sol = Solution()
print(sol.combinationSum([2,3,6,7], 7))   # Output: [[2,2,3], [7]]
print(sol.combinationSum([2,3,5], 8))     # Output: [[2,2,2,2], [2,3,3], [3,5]]
print(sol.combinationSum([2], 1))         # Output: []
