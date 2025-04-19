class Solution(object):
    

    def subsets(self, nums):
        ans = []
        subar = []
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        def sub(curr, word, n):
            #base
            if(curr == n):
                ans.append(subar[:])
                return
            #recursion
            sub(curr+ 1, word, n)
            subar.append(word[curr])
            sub(curr+1, word, n)
            del subar[-1]
        sub(0, nums, len(nums))
        return ans