class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sC;
        unordered_map<char, int> tC;
        
        for (char c : s) {
            if (sC.count(c)) {
                sC[c]++;
            } else {
                sC[c] = 1;
            }
        }
        for (char c : t) {
            if (tC.count(c)) {
                tC[c]++;
            } else {
                tC[c] = 1;
            }
        }
        return sC == tC;

    }
};
