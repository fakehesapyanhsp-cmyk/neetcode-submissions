class Solution {
public:
    void merge(vector<int>& nums, int l, int m, int r) {
        vector<int> buffer(r-l+1, 0);
        int n1 = m-l+1;
        int n2 = r-m;
        int p1 = 0;
        int p2 = m-l+1;
        int p3 = l;
        for (int i = 0; i < n1; i++) {
            buffer[i] = nums[i+l];
        }
        for (int i = 0; i < n2; i++) {
            buffer[i+p2] = nums[m+1+i];
        }
        while (p1 < n1 && p2 < n2) {
            if (buffer[p1] < buffer[p2]) {
                nums[p3++] = buffer[p1++];
            } else {
                nums[p3++] = buffer[p2++];
            }
        }
        while (p2 < n2) {
            nums[p3++] = buffer[p2++];
        }
        while (p1 < n1) {
            nums[p3++] = buffer[p1++];
        }
    }

    void mergeSort(vector<int>& nums, int l, int r) {
        if (l == r) {
            return;
        }
        int m = l + (r - l) / 2;
        
        divide(nums, l, m);
        divide(nums, m+1, r);

        merge(nums, l, m, r);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};