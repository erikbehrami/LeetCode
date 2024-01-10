class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int numberOfEmployeesWhoMetTarget = 0;
        int n = hours.size();
        for(int i = 0; i < n; i++){
            if(hours[i] >= target){
            numberOfEmployeesWhoMetTarget++;
            }
        }
        return numberOfEmployeesWhoMetTarget++;
    }
};