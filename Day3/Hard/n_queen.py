#####   abhi nhi hua hai leetcode pe mujhse solve

from typing import List  # Import List type for type hinting  

class Solution:  
    def solveNQueens(self, n: int) -> List[List[str]]:  
        def backtrack(row: int):  
            if row == n:  # Base case: if all queens are placed  
                solutions.append([''.join(row) for row in board])  # Add current board to solutions  
                return  
            
            for col in range(n):  # Try to place a queen in each column  
                if col in cols or (row - col) in diagonals1 or (row + col) in diagonals2:  
                    continue  # Skip if the position is under attack  
                
                board[row][col] = 'Q'  # Place the queen  
                cols.add(col)  # Mark column as used  
                diagonals1.add(row - col)  # Mark the left diagonal as used  
                diagonals2.add(row + col)  # Mark the right diagonal as used  
                
                backtrack(row + 1)  # Move to the next row  
                
                board[row][col] = '.'  # Backtrack: Remove the queen  
                cols.remove(col)  # Unmark column  
                diagonals1.remove(row - col)  # Unmark left diagonal  
                diagonals2.remove(row + col)  # Unmark right diagonal  
        
        solutions = []  # List to store solutions  
        board = [['.' for _ in range(n)] for _ in range(n)]  # Create an n x n board  
        cols = set()  # Set to track used columns  
        diagonals1 = set()  # Set to track left diagonals  
        diagonals2 = set()  # Set to track right diagonals  
        
        backtrack(0)  # Start backtracking from the first row  
        return solutions  # Return all the solutions  

# Example usage  
solution = Solution()  
n = 4  
result = solution.solveNQueens(n)  
for r in result:  
    for line in r:  
        print(line)  
    print()