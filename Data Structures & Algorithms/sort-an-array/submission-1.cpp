class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        stable_sort(nums);
        return nums;
    }
};