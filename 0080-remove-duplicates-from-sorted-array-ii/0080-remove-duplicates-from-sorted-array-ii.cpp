class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         
        // We allow at most two occurrences of each element
        if (nums.size() <= 2) return nums.size();  // Edge case: already fits the condition

        int index = 2;  // Position to place the next valid element
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[index - 2]) {  // Check if this element can appear again
                nums[index++] = nums[i];  // Place the element in its correct position
            }
        }
        return index;
    }
};