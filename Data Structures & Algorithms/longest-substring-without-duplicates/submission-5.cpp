class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> indexes;
        int l = 0;
        int ans = 0;
        int n = s.size();
        for (int r = 0; r < n; i++) {
            if (indexes.count(s[r]) && indexes.count(s[r]) >= l) {
                l = indexes[s[r]] + 1;
            }
            indexes[s[r]] = r;
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
