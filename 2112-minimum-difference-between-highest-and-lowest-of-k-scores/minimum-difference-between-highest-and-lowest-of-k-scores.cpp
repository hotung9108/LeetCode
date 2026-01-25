class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i <= nums.size() - k; i++) {
            int diff = nums[i + k - 1] - nums[i];
            pq.push(diff);
        }
        return pq.top();
    }
};