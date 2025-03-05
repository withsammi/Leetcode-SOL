class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> isReachable(n, false);
        isReachable[0] = true;
        for (int i = 0; i < n; i++) {
            if (isReachable[i] == false) break;
            int maxSteps = nums[i];
            for (int j = 1; j <= maxSteps; j++) {
                int nextIndex = i + j;
                if (nextIndex >= n) break;
                isReachable[nextIndex] = true;
                if (nextIndex == n - 1) return true;
            }
        }
        if (isReachable[n - 1] == true) return true;
        else return false;
    }
};
