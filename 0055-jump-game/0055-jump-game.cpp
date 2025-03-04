class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0; // Tracks the farthest index we can reach
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i > farthest) return false; // If we reach an unreachable index
            farthest = max(farthest, i + nums[i]); // Update the farthest reach
            if (farthest >= n - 1) return true; // If we can reach the end
        }
        return true;
    }
};
