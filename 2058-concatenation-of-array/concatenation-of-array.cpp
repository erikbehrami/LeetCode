class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> rezultati(2*n);
         for (int i = 0; i < n; i++) {
            rezultati[i] = nums[i];
            rezultati[i+n] = nums[i];
    }

    return rezultati;
        
    }

};