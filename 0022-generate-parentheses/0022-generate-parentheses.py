class Solution: 
    def generateParenthesis(self, n: int) -> list[str]: 
        res = []
        cur = []
        def traversal(open, close):
            if open == 0 and close == 0:
                res.append(''.join(cur))
                return
            if open > 0:
                cur.append('(')
                traversal(open - 1, close)
                cur.pop()
            if close > open:
                cur.append(')')
                traversal(open, close - 1)
                cur.pop()
        traversal(n, n)
        return res