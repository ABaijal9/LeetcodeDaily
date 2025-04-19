class Solution(object):
    def exist(self, board, word):
        n, m= len(board), len(board[0])
        l = len(word)
        visited = set()
        def dfs(i,j,c):
            #base case
            if c == l: return True
            if (i<0 or j<0 or i>=n or j>=m or (i,j) in visited or word[c] != board[i][j]):
                return False
            #rec
            visited.add((i,j))
            ans = (dfs(i+1,j,c+1) or dfs(i-1,j,c+1) or dfs(i,j+1,c+1) or dfs(i,j-1,c+1))
            visited.remove((i,j))
            return ans
        for i in range(n):
            for j in range(m):
                if dfs(i,j,0): return True
        return False
            
