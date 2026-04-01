class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        hash_table_s = {}
        hash_table_t = {}

        if len(s) != len(t):
            return False

        for i in s:
            hash_table_s[i] = hash_table_s.get(i, 0) + 1

        for i in t:
            hash_table_t[i] = hash_table_t.get(i, 0) + 1

        return hash_table_s == hash_table_t
        