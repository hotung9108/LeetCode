class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // map: số -> danh sách index xuất hiện trong nums2
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]].push_back(i);
        }

        vector<int> res;
        for (int i = 0; i < nums1.size(); i++) {
            int index = mp[nums1[i]][0];
            int nextGreater = -1;
            for (auto &kv : mp) {
                int key = kv.first;
                if (key > nums1[i]) {
                    for (int pos : kv.second) {
                        if (pos > index) {
                            if (nextGreater == -1 || pos < mp[nextGreater][0]) {
                                nextGreater = key;
                            }
                            break; 
                        }
                    }
                }
            }

            res.push_back(nextGreater);
        }
        return res;
    }
};
