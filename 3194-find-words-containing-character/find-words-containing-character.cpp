class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector <int> rezultati;
        for(int i = 0; i<words.size();i++ )
        {
            bool xfound =false;
            for(int j=0; j<words[i].size(); j++)
            {
                if(words[i][j] == x)
                {
                    xfound = true;
                    break;
                }
            }
            if(xfound)
             {
                rezultati.push_back(i);
             }
        }
        
       return rezultati;
    }
};