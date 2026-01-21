class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size(); 
        for(int i = 0; i < k; ) {
            if(nums[i] == val) {
                nums[i] = nums[k - 1]; 
                k--; 
            } else {
                i++; 
            }
        }
        return k; 
    }
};