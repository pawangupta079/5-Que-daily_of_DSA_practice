#not done




class TrieNode:  
    def __init__(self):  
        self.children = {}  # Dictionary to store child nodes  
        self.is_end = False  # Flag to mark the end of a word  


class Solution:  
    def findWords(self, board, words):  
        root = TrieNode()  # Create a root for the Trie  
        result = set()  # Set to store found words  

        # Build the Trie from the list of words  
        for word in words:  
            self.insert_word(root, word)  

        # Start searching for words in the board  
        for i in range(len(board)):  
            for j in range(len(board[0])):  
                if board[i][j] in root.children:  # Check if the letter is in the Trie  
                    self.backtrack(i, j, board, root.children[board[i][j]], "", result)  

        # Convert the result set to a list before returning  
        return list(result)  

    def insert_word(self, root, word):  
        node = root  
        for char in word:  
            if char not in node.children:  
                node.children[char] = TrieNode()  # Create a new TrieNode if not present  
            node = node.children[char]  # Move to the child node  
        node.is_end = True  # Mark the end of the word  

    def backtrack(self, x, y, board, node, path, result):  
        char = board[x][y]  # Get the current character  
        node = node.children[char]  # Access the next Trie node  
        path += char  # Append the character to the current path  

        if node.is_end:  # Check if we have formed a valid word  
            result.add(path)  # Add the word to the results  

        # Mark the current cell as visited  
        board[x][y] = '#'  # Use a special character to mark this cell as visited  

        # Explore the adjacent cells (down, up, right, left)  
        directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]  
        for dx, dy in directions:  
            new_x, new_y = x + dx, y + dy  # Calculate new positions  
            # Check if the new position is within bounds and not visited  
            if 0 <= new_x < len(board) and 0 <= new_y < len(board[0]) and board[new_x][new_y] != '#':  
                self.backtrack(new_x, new_y, board, node, path, result)  # Recursive call  

        # Backtrack: unmark the cell and remove the character from the path  
        board[x][y] = char  # Restore the original character  
        path = path[:-1]  # Remove the last character from the path  


# Example usage  
if __name__ == "__main__":  
    board = [  
        ['o', 'a', 'a', 'n'],  
        ['e', 't', 'a', 'e'],  
        ['i', 'h', 'k', 'r'],  
        ['i', 'f', 'l', 'v']  
    ]  
    words = ["oath", "pea", "eat", "rain"]  

    solution = Solution()  
    found_words = solution.findWords(board, words)  

    print(found_words)  # Print found words     