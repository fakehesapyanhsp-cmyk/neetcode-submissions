class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int, int> counter;
        int l = 0;
        int n = s.size();
        int maxf = 0;
        int ans = 0;
        for (int r = 0; r < n; r++) {
            counter[s[r]]++;
            maxf = max(counter[s[r]], maxf);
            while ((r-l+1)-maxf > k) {
                counter[s[l]]--;
                l++;
            }
            ans = max(r-l+1, ans);
        }
        return ans;
    }
};
