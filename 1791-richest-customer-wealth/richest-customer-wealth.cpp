class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum = 0;
        for(int i=0; i<accounts.size(); i++){
            int Sum = 0;
            for(int j=0; j<accounts[i].size(); j++){
                Sum += accounts[i][j];
            }

            maxSum = max(maxSum , Sum);
        }
        return maxSum;
        
    }
};