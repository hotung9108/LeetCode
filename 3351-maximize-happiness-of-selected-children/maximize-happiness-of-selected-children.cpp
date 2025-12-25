class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum = 0;
        priority_queue<int> pq;
        for(int x: happiness) pq.push(x);
        for(int i = 0; i < k ; i++){
            long long t = pq.top();
            if(t - i < 0) break;
            sum = sum + t - i;
            pq.pop();
        }
        return sum;
    }
};