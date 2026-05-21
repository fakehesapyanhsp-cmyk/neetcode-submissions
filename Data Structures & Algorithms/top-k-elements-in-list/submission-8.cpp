class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> count;
        vector<vector<int>> freq(n+1, vector<int>());
        for (auto num : nums) {
            count[num] = count[num] + 1;
        }
        for (auto [key, value] : count) {
            freq[value].push_back(key);
        }
        int j = 0;
        int i = n;
        vector<int> ans;
        while (j < k) {
            for (auto num : freq[i]) {
                ans.push_back(num);
                j++;
            }
            i--;
        }
        return ans;
    }
};
