class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long maxVal = 0;
        int maxDiff = 0;  
        int maxNum = nums[0];  
        
        for(int k = 2; k < n; k++) {
            maxDiff = max(maxDiff, maxNum - nums[k-1]);
            maxNum = max(maxNum, nums[k-1]);
            maxVal = max(maxVal, (long long)maxDiff * nums[k]);
        }
        
        return maxVal > 0 ? maxVal : 0;
    }
};