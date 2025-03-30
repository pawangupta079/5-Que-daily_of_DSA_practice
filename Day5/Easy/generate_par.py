def generateParenthesis(n):  
    def backtrack(s='', open=0, close=0):  
        if len(s) == 2 * n:  
            result.append(s)  
            return  
        if open < n:  
            backtrack(s + '(', open + 1, close)  
        if close < open:  
            backtrack(s + ')', open, close + 1)  

    result = []  
    backtrack()  
    return result  