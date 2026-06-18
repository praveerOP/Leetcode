class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans = 0;
        vector <int> alpha (26,0);
        for (int i= 0 ; i < text.size(); i++){
            alpha[text[i]-'a']++;
        }
         ans = min({
            alpha['b' - 'a'],
            alpha['a' - 'a'],
            alpha['l' - 'a'] / 2,
            alpha['o' - 'a'] / 2,
            alpha['n' - 'a']
        });
        return ans;
        }
};