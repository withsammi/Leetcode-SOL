class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size();
        int low = 0;
        int high = n-1;
        int minVal = INT_MAX;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[low]<=nums[mid]){
                minVal = min(minVal,nums[low]);
                low = mid + 1;
            }else{
                high = mid-1;
                minVal = min(minVal,nums[mid]);
            }
        }
        return minVal;
        
    }
};