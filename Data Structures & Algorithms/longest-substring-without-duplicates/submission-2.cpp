class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> indexes;
        int l = 0;
        int ans = 0;
        int n = s.size();
        int r;
        for (r = 0; r < n; r++) {
            if (indexes.count(s[r])) {
                ans = max(ans, r - l);
                l = indexes[s[r]]+1;
            }
            indexes[s[r]] = r;
        }
        ans = max(ans, r - l);
        return ans;
    }
};
