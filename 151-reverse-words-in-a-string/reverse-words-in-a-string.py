class Solution(object):
    def reverseWords(self, s):
        l = s.split()

        return " ".join(reversed(l))