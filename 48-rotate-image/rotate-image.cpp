class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> result(n, vector<int>(n));
        for(int i = 0; i < n; i++){ 
            for(int j = n-1 ; j >= 0; j--){ 
                result[i][n-j-1] = matrix[j][i];
            }
        }
        matrix = result;
    }
};
