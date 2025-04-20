class Solution(object):
    def letterCombinations(self, digits):
        if digits == "": return []
        n = len(digits)
        ans = []
        dial = {'2':'abc',
                '3':'def',
                '4':'ghi',
                '5':'jkl',
                '6':'mno',
                '7':'pqrs',
                '8':'tuv',
                '9':'wxyz'}
        def dfs(pos,com):
            #base
            if len(com) == len(digits):
                ans.append(com)
                return
            #rec
            for i in dial[digits[pos]]:
                dfs(pos+1,com+i)
        

        dfs(0,"")
        return ans



        