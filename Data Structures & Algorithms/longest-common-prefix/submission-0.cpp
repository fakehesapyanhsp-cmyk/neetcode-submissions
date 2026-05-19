class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans = "";
        int n = strs.size();
        for(int i=0;;i++) {
            if (i >= strs[0].size() || i >= strs[n-1].size()) {
                return ans;
            } 
            if (strs[0][i] == strs[0][n-1]) {
                ans += strs[0][i];
            } else {
                return ans;
            }
        }
        return ans;
    }
};