class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<pair<int, int>> freq;
        vector<int> ans;
        int last = nums[0];
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] == last) count++; 
            else {
                freq.push_back({last, count});
                last = nums[i];
                count = 1;
            }
        }
        freq.push_back({last, count});
        sort(freq.begin(), freq.end(), [](pair<int, int>& a, pair<int, int>& b){return a.second > b.second;});
        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};
