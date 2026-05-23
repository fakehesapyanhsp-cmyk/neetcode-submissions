class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int n = nums.size();
        while (i < n && nums[i] <= 0) i++;
        int j = 1;
        while (i < n && nums[i] == j) {
            while(i < n && nums[i] == j) i++;
            j++;
        }   
        return j;
    }
};