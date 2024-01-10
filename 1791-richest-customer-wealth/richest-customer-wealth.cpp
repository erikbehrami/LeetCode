class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows = accounts.size();
        int cols = (rows > 0) ? accounts[0].size() : 0;
        int maxWealth = 0;
        for(int i = 0; i< rows; i++){
            int wealth =0;
            for(int j =0; j<cols; j++)
            {
                wealth += accounts[i][j];
            }
             maxWealth = max(maxWealth,wealth);
        }
      
       return maxWealth;
    }
};