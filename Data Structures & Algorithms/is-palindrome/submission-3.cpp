class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int l = 0, r = n - 1;
        while (l < r) {
            while (l < r && s[l] == ' ') l++;
            while (l < r && s[r] == ' ') r--;
            if (l >= r) break;
            char lv = s[l];
            if (lv >= 'A' && lv <= 'Z') lv += 'a' - 'A';
            char rv = s[l];
            if (rv >= 'A' && rv <= 'Z') rv += 'a' - 'A';
            if (lv != rv) return false;
            r--;
            l++;
        }
        return true;
    }
};
