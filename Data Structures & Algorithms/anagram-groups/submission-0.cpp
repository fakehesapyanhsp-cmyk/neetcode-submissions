class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> sorted;
        unordered_map<string, vector<string>> groups;
        vector<vector<string>> ans;
        for (auto& str : strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(str);
        }
        for (auto& [k, v] : groups) {
            ans.push_back(v);
        }
        return ans;
    }
};
