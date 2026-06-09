class Solution {
public:
    string reverseWords(string s) {
        
        vector <string> word;
        string w;
        for (int i=0;i<s.size();i++){
            
            if (s[i]!=' ')
                w+=s[i];
                else {
                     if (!w.empty())
                    word.push_back(w);
                    w.clear();
                }
            }
            if (!w.empty())
                    word.push_back(w);
                    w.clear();
        string ans;
        for (int i=word.size()-1;i>=0;i--){
            
            ans+=word[i];
            if (i>=1)
                ans+=' ';
        }
        return ans;
    }
};