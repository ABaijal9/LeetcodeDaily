class Solution(object):
    def permuteUnique(self, nums):
        n = len(nums)
        ans = set()
        def dfs(i):
            if i == n:
                tums = tuple(nums)
                ans.add(tums)
            for t in range(i,n):
                nums[i], nums[t] = nums[t], nums[i]
                dfs(i+1)
                nums[i], nums[t] = nums[t], nums[i]
        dfs(0)
        return [list(t) for t in ans]

        