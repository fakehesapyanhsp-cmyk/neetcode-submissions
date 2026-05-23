class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        while (nums[i] <= 0) i++;
        int j = 1;
        while (nums[i] == j) {
            while(num[i] == j) i++;
            j++;
        }   
        return j;
    }
};