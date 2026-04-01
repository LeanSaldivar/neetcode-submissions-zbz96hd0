class Solution:
    def isPalindrome(self, s: str) -> bool:
        trim = s.translate(str.maketrans("", "", "!.,?':;_"))
        clean = "".join(trim.split()).lower()

        slice = clean[::-1]
            
        return clean == slice