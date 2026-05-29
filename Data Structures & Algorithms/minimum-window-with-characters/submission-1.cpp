class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        unordered_map<char, int> chars; for (auto c : t) chars[c]++;
        int unique = chars.size();
        int ansl = -1;
        int ansr = -1;
        int matches = 0;
        int l = 0;
        unordered_map<char, int> seen;
        for (int r = 0; r < n; r++) {
            seen[s[r]]++;
            if (chars.contains(s[r]) && seen[s[r]] == chars[s[r]]) {
                matches++;
            }
            if (matches == unique) {
                while ((!chars.contains(s[l])) || (seen[s[l]] > chars[s[l]])) seen[s[l++]]--;
                if ((ansl == -1 && ansr == -1) || (ansr - ansl) > r - l) {
                    ansl = l;
                    ansr = r;
                }
            }
        }
        if (ansl == -1 && ansr == -1) {
            return "";
        } else {
            return s.substr(ansl, ansr - ansl + 1);
        }
    }
};
