class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0,
        int l = 0, r = n-1;
        int leftMax = height[l], rightMax = height[r];
        while (l < r) {
            if (leftMax > rightMax) {
                r--;
                rightMax = max(height[r], rightMax);
                ans += rightMax - height[r];
            } else {
                l++;
                leftMax = max(leftMax, height[l]);
                ans += leftMax - height[l];
            }
        }
        return ans;
    }
};
