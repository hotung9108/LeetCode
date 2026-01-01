class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int t = 1;
        for(int i = digits.size()-1; i>=0; i--){
            int sum = digits[i] + t;
            digits[i] = sum%10;
            t = sum/10;
        }
        if(t){
            digits.insert(digits.begin(), t);
        }
        return digits;
    }
};