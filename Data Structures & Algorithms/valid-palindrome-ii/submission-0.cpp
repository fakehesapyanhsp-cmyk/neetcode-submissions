class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int l = 0, r = n - 1;
        int c = 0;
        while (l < r) {
            if (s[l] != s[r]) {
                c++;
                if (c > 1) {
                    return false
                }
            }
            l++;
            r--;
        }
        return true;
    }
};