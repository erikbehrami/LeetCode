class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> num(n);

        for(int i = 0; i < n; i++){
            int smaller =0;
            for(int j = 0; j < n; j++){
                if(nums[i] > nums[j]){
                    smaller++;
                }

            }
            num[i] = smaller;
        }
        return num;
    }
};