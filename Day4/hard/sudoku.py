#nhi hua#need practice
#  Need practice nhi hua solve

from typing import List  

class Solution:  
    def solveSudoku(self, board: List[List[str]]) -> None:  
        """  
        Solve the Sudoku puzzle by modifying the board in-place.  
        """  
        
        def is_valid(row: int, col: int, num: str) -> bool:  
            # Check if `num` is not in the current row, column and 3x3 box  
            for i in range(9):  
                if board[row][i] == num:  # Check row  
                    return False  
                if board[i][col] == num:  # Check column  
                    return False  
                if board[3 * (row // 3) + i // 3][3 * (col // 3) + i % 3] == num:  # Check 3x3 box  
                    return False  
            return True  
        
        def backtrack() -> bool:  
            for r in range(9):  
                for c in range(9):  
                    if board[r][c] == '.':  # Find an empty cell  
                        for num in '123456789':  # Try digits from 1 to 9  
                            if is_valid(r, c, num):  
                                board[r][c] = num  # Place the number  
                                if backtrack():  # Recur  
                                    return True  
                                board[r][c] = '.'  # Backtrack (undo choice)  
                        return False  # If no number can be placed, return false  
            return True  # All cells are filled correctly  

        backtrack()  

# Example usage  
solution = Solution()  
board = [  
    ["5","3",".",".","7",".",".",".","."],  
    ["6",".",".","1","9","5",".",".","."],  
    [".","9","8",".",".",".",".","6","."],  
    ["8",".",".",".","6",".",".",".","3"],  
    ["4",".",".","8",".","3",".",".","1"],  
    ["7",".",".",".","2",".",".",".","6"],  
    [".","6",".",".",".",".","2","8","."],  
    [".",".",".","4","1","9",".",".","5"],  
    [".",".",".",".","8",".",".","7","9"]  
]  

solution.solveSudoku(board)  
for row in board:  
    print(row)  