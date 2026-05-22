class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int k = nums.size()/3;
        unordered_map<int, int> count;
        for (auto num : nums) {
            count[num]++;
        }
        vector<int> ans;
        for (auto [k, v] : count) {
            if (v > k) {
                ans.push_back(k);
            }
        }
        return ans;
    }
};