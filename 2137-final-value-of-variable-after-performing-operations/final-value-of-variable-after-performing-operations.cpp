class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
    int X = 0;
    int n = operations.size();
    for (int i = 0; i < n; ++i) {
        const string op = operations[i];
        if (op == "++X" | op == "X++") {
            X++;
        } else if (op == "--X" || op == "X--") {
            X--;
        }
     }
    return X;
    }

};