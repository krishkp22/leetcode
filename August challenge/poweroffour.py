#approach:This satisfies the given condition that didn't use recursion
class Solution(object):
    def isPowerOfFour(self, n):
        return n>0 and log(n,4).is_integer()
