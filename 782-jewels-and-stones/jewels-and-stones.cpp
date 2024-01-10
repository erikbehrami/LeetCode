class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int a = jewels.size(), b = stones.size();
        int n = 0;
        for(int i=0;i<a;i++){
            for(int j=0; j<b;j++){
                if(stones.at(j)==jewels.at(i)){
                    n++;
                }
            }
        }
        return n;
    }
};