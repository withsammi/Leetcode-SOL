class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            int more= target-nums[i];
            if(mpp.find(more)!=mpp.end()){
                return {i,mpp[more]};
            }
            // Store the current number and its index in the map
            mpp[nums[i]]=i;
        }
        return {};
    }
};