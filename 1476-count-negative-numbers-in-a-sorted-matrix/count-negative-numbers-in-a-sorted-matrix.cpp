class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int k =0;
        int row = grid.size();
        int cols = (row>0)?(grid[0].size()):0;
        for(int i =0; i< row; i++){
            for(int j =0; j< cols; j++){
                if(grid[i][j]<0)
                {
                    k++;
                }
            }
        }
        return k;
    }
};