class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        res = s.split()
        last = res[::-1]
        return len(last[0])