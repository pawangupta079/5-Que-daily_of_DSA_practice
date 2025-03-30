# nhi hua

#Need A lot of practice


from typing import List  

class Solution:  
    def exist(self, board: List[List[str]], word: str) -> bool:  
        rows, cols = len(board), len(board[0])  
        
        def backtrack(r, c, index):  
            # Base case: if we reach the end of the word  
            if index == len(word):  
                return True  
            
            # If out of bounds or mismatch, return False  
            if (r < 0 or r >= rows or c < 0 or c >= cols or   
                board[r][c] != word[index]):  
                return False  
            
            # Store the current character and mark the cell as visited  
            temp = board[r][c]  
            board[r][c] = "#"  # Mark as visited  
            
            # Explore in all four directions: up, down, left, right  
            found = (backtrack(r + 1, c, index + 1) or  # Down  
                     backtrack(r - 1, c, index + 1) or  # Up  
                     backtrack(r, c + 1, index + 1) or  # Right  
                     backtrack(r, c - 1, index + 1))    # Left  
            
            # Restore the character back to the board  
            board[r][c] = temp  
            return found  
        
        # Start backtracking from each cell in the grid  
        for r in range(rows):  
            for c in range(cols):  
                if backtrack(r, c, 0):  # Start from the first letter of the word  
                    return True  

        return False  

# Example usage  
sol = Solution()  
board = [  
    ['A', 'B', 'C', 'E'],  
    ['S', 'F', 'C', 'S'],  
    ['A', 'D', 'E', 'E']  
]  
print(sol.exist(board, "ABCCED"))  # Output: True  
print(sol.exist(board, "SEE"))      # Output: True  
print(sol.exist(board, "ABCB"))     # Output: False  