class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int res = 0;
        while(!check_decreasing(nums)){
            int minSum = INT_MAX;
            int idx = -1;

            for(int i = 0; i < nums.size()-1; i++){
                int sum = nums[i] + nums[i+1];
                if(sum < minSum){
                    minSum = sum;
                    idx = i;
                }
            }
            nums[idx] = nums[idx] + nums[idx+1];
            nums.erase(nums.begin()+idx+1);
            res++;
        }
        return res;


    }
    bool check_decreasing(vector<int> &nums){
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[i-1]) return false;
        }
        return true;
    }
};