#approach:simple 2 line solution with the power of python.
class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=" ".join(pal for pal in s if pal.isalnum()).lower()
        return s==s[: :-1]
