class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, vector<int>> mp;
        for(int i = 0; i < nums2.size(); i++){
            mp[nums2[i]].push_back(i);
        }
        vector<int> res;
        for(int i = 0; i < nums1.size(); i++){
            int index = mp[nums1[i]][0];
            int nextGreater = -1;
            for(int j = index + 1; j < nums2.size(); j++){
                if(nums2[j] > nums1[i]){
                    nextGreater = nums2[j];
                    break;
                }
            }
            res.push_back(nextGreater);
        }
        return res;
    }
};