class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int leftindex = low;
        int rightindex = mid + 1;
        while (leftindex <= mid && rightindex <= high) {
            if (nums[leftindex] <= nums[rightindex]) {
                temp.push_back(nums[leftindex]);
                leftindex++;
            } else {
                temp.push_back(nums[rightindex]);
                rightindex++;
            }
        }
        while (leftindex <= mid) {
            temp.push_back(nums[leftindex]);
            leftindex++;
        }
        while (rightindex <= high) {
            temp.push_back(nums[rightindex]);
            rightindex++;
        }
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }
    void mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) {
            return;
        }
        int mid = (low + high) / 2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};