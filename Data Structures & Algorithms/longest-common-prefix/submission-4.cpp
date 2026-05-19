class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        char c;
        for (int i = 0;;i++) {
            c = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != c) {
                    return ans;
                }
            }
            ans += c;
        }
    }
    return ans;
};