class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> postfix(n, 0);
        int post = 0;
        for (int i = n-1; i >= 0; i--) {
            postfix[i] = post;
            post = max(post, height[i]);
        }
        int ans = 0;
        int pre = 0;
        for (int i = 0; i < n; i++) {
            ans += max(0, min(pre, postfix[i]) - height[i]);
            pre = max(pre, height[i]);
        }
        return ans;
    }
};
