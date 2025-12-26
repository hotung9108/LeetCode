
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; 
        vector<int> v;
        for(int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if(map.find(complement) != map.end() && map[complement] != i) { 
                v.push_back(i);
                v.push_back(map[complement]);
                return v;
            }
            map[nums[i]] = i;
        }
        return v;
    }
};