class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int min = 1;
        sort(nums.begin(), nums.end());
        for(int x: nums){
            if(x == min){
                min++;
            }
        }
        return min;
    }
};