class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x, res = 0;
        while(left <= right){
            long long m = left + (right - left)/2;
            if(m*m >x){
                right = m - 1;
            }
            else if(m*m < x){
                left = m + 1;
                res = m;
            }
            else{
                return m;
            }
        }
        return res;
    }
};