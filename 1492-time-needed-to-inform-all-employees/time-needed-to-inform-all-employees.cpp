class Solution {
public:
    int dfs(int u, vector<vector<int>>& adj, vector<int>& informTime) {
        int maxTime = 0;
        for(int v : adj[u]) {
            maxTime = max(maxTime, dfs(v, adj, informTime));
        }
        return informTime[u] + maxTime;
    }

    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> adj(n);
        for(int i = 0; i < n; i++) {
            if(manager[i] != -1) {
                adj[manager[i]].push_back(i);
            }
        }
        return dfs(headID, adj, informTime);
    }
};
