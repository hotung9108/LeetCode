class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int v_size = cost.size();
        int dp[v_size];
        dp[0] = cost[0], dp[1] = cost[1];
        for (int i = 2; i < v_size; i++)
        {
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        return dp[v_size-1]<dp[v_size-2]?dp[v_size-1]:dp[v_size-2];
    }

};