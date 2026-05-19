class Solution {
public:
    bool isAnagram(string s, string t) {
        array<int, 26> countS{0};
        array<int, 26> countT{0};
        for (auto c : s) {
            countS[c-'a']++;
        }
        for (auto c: t) {
            countT[c-'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (countS[i] != countT[i]) {
                return false;
            }
        }
        return true;
    }
};
