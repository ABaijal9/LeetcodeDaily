class Solution(object):
    def reverseWords(self, s):
        ans = []
        temp = ""
        for ch in s:
            if ch == ' ':
                if temp:
                    ans.insert(0,temp)
                    temp = ""
                continue
            temp += ch
        if temp:
            ans.insert(0,temp)
        
        res = ""
        for i in ans:
            res = res + ' ' + i
        return res[1:]