class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i+=2){
            if(i+1>=n || nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};