class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s.split()
        t.split()

        if sorted(s) == sorted(t):
            return True
        else:
            return False
        