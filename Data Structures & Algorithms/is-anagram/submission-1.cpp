class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> sLenght;
        unordered_map<char, int> tLength;

         for (int i = 0; i < s.length(); i++) {
            sLenght[s[i]]++;
            tLength[t[i]]++;
        }
        return sLenght == tLength;
    }
};
