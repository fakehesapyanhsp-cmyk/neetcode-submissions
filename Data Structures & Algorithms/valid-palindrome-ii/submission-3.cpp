class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int l = 0, r = n - 1;
        int c = 0;
        while (l < r) {
            if (s[l] != s[r]) {
                if (c == 1) return false;
                c++;
                if (s[l+1] == s[r]) {
                    l++;
                } else if (s[r-1] == s[l]) {
                    r--;
                } else {
                    return false;
                }
            } 
            l++;
            r--;
        }
        return true;
    }
};