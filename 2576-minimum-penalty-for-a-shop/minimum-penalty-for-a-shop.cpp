class Solution {
public:
    int bestClosingTime(string customers) {
        int leng = customers.size(); 
        vector<int> prefix_sumN(leng+1, 0); 
        vector<int> suffix_sumY(leng+1, 0);
        for(int i = 0; i < leng; i++) { prefix_sumN[i+1] = prefix_sumN[i] + (customers[i] == 'N'); }
        for(int i = leng-1; i >= 0; i--) { suffix_sumY[i] = suffix_sumY[i+1] + (customers[i] == 'Y'); }
        int bestHour = 0;
        int minPenalty = INT_MAX;
        for(int i = 0; i <= leng; i++){
            int penalty = prefix_sumN[i] + suffix_sumY[i];
            if(penalty < minPenalty){
                minPenalty = penalty;
                bestHour = i;
            }
        }
        return bestHour;
    }
};