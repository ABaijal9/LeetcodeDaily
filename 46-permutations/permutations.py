class Solution(object):
    def permute(self, nums):
        ans = []
        if len(nums) == 1:
            return [nums[:]]
        for i in range(len(nums)):
            n = nums.pop(0)
            perms = self.permute(nums)
            for perm in perms:
                perm.append(n)
            ans.extend(perms)
            nums.append(n)
        return ans