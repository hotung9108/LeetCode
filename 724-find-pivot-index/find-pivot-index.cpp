class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(), total = 0;
        vector<int> prefix_sum(n, 0);
        prefix_sum[0] = nums[0];
        
        for(int i = 0; i < n; i++){
            total += nums[i];
        }
        if(total - prefix_sum[0] == 0) return 0;
        for(int i = 1; i < n; i++){
            prefix_sum[i] = prefix_sum[i-1] + nums[i];
        }
        for(int i = 1; i < n; i++){
            if(prefix_sum[i-1] == (total - prefix_sum[i])){
                return i;
            }
        }
        return -1;
    }
};