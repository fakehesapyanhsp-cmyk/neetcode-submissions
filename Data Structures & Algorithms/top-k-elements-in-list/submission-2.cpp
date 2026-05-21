class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> count(2001, 0);
        for (auto num : nums) {
            count[num+1000]++;
        }
        vector<pair<int, int>> freqs;
        for (int i = -1000; i <= 1000; i++) {
            if (count[i+1000] != 0) {
                freqs.push_back({i+1000, count[i+1000]});
            }
        }
        sort(freqs.begin(), freqs.end(), [](pair<int, int>& a, pair<int, int> b) {
            return a.second > b.second;
        })
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(freqs[i].first);
        }
        return ans;
    }
};
