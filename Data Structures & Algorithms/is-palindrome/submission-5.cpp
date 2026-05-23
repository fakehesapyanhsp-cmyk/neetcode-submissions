class Solution {
public:
    bool isValid(char c) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) return true;
        return false;
    }

    bool isPalindrome(string s) {
        int n = s.size();
        int l = 0, r = n - 1;
        while (l < r) {
            while (l < r && isValid(s[l])) l++;
            while (l < r && isValid(s[r])) r--;
            if (l >= r) break;
            char lv = s[l];
            if (lv >= 'A' && lv <= 'Z') lv += 'a' - 'A';
            char rv = s[r];
            if (rv >= 'A' && rv <= 'Z') rv += 'a' - 'A';
            if (lv != rv) return false;
            r--;
            l++;
        }
        return true;
    }
};
