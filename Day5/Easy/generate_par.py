
from typing import List
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        result = []

        def backtrack(curr: str, open_count: int, close_count: int):
            # Base Case: Valid sequence of length 2*n
            if len(curr) == 2 * n:
                result.append(curr)
                return
            # Add '(' if we have not used all open brackets
            if open_count < n:
                backtrack(curr + "(", open_count + 1, close_count)
            # Add ')' if valid (should not exceed '(' count)
            if close_count < open_count:
                backtrack(curr + ")", open_count, close_count + 1)
        backtrack("", 0, 0)
        return result
        

