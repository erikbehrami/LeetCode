class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();
        string defangedAdress;
            for(int i =0; i<n; i++){
            char c = address[i];
            if (c == '.') {
                defangedAdress += "[.]";
            } else {
                defangedAdress += c;
            }
        }
        
        return defangedAdress;

    }
};