class Solution(object):
    def is_within(self, num):
        return -(2**31) <= num <= 2**31-1
    
    def reverse(self, x):
        if x == 0:
            return x
        elif x > 0:
            x = int(str(x)[::-1])
        else:
            x = -int(str(-x)[::-1])
        if not self.is_within(x):
            return 0
        return x