class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n, 0);
        int j = 0;
        for (int k = 0; k < 2; k++)
        for (int i = 0; i < n; i++, j++) {
            ans[j]=nums[i];
        }       
        return ans;
    }
};