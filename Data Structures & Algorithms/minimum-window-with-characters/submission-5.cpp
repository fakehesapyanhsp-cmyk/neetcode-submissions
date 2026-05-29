class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        vector<int> chars(128, 0);
        int unique = 0;
        for (auto c : t) {
            if (chars[c] == 0) {
                unique++;
            }
            chars[c]++;
        }
        int ansl = -1;
        int ansr = -1;
        int matches = 0;
        int l = 0;
        vector<int> seen(128, 0);
        for (int r = 0; r < n; r++) {
            seen[s[r]]++;
            if ((chars[s[r]] > 0) && seen[s[r]] == chars[s[r]]) {
                matches++;
            }
            if (matches == unique) {
                while ((!(chars[s[l]] > 0)) || (seen[s[l]] > chars[s[l]])) seen[s[l++]]--;
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
