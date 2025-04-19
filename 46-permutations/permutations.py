class Solution(object):
    def permute(self, nums):
        n = len(nums)
        ans = []
        def dfs(i):
            if i == n:
                ans.append(nums[:])
            for t in range(i,n):
                nums[i], nums[t] = nums[t], nums[i]
                dfs(i+1)
                nums[i], nums[t] = nums[t], nums[i]
        dfs(0)
        return ans