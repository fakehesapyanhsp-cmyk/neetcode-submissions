class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int l = 0, r = n - 1;
        while (l < r) {
            while (l < r && s[l] == ' ') l++;
            while (l < r && s[r] == ' ') r--;
            if (l >= r) break;
        }
        return true;
    }
};
