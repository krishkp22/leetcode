#approach:simple one line solution using inbuilt methods of python
class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        return word.isupper() or word.islower() or word.istitle()
