from typing import List  

class Solution:  
    def letterCasePermutation(self, s: str) -> List[str]:  
        results = []  

        def help_backtrack(index: int, current: str):  
            # Base case: if the index reaches the length of the input string  
            if index == len(s):  
                results.append(current)  # Add the current permutation to results  
                return  
            
            # Get the current character  
            current_char = s[index]  
            if current_char.isalpha():  # If it's a letter, try both cases  
                # Explore the lowercase case  
                help_backtrack(index + 1, current + current_char.lower())  
                # Explore the uppercase case  
                help_backtrack(index + 1, current + current_char.upper())  
            else:  
                # If it's a digit, only continue adding it  
                help_backtrack(index + 1, current + current_char)  

        # Start backtracking with the first index and an empty current string  
        help_backtrack(0, "")  
        return results