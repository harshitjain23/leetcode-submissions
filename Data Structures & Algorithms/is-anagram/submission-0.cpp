class Solution {
   public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> seen;

        if (s.length() != t.length()) return false;

        for (int i = 0; i < s.length(); i++) {
            seen[s[i]]++;
        }

        for (int i = 0; i < t.length(); i++) {
            seen[t[i]]--;
        }

        for (char ch = 'a'; ch <= 'z'; ch++) {
            if (seen[ch] != 0) return false;
        }

        return true;
    }
};