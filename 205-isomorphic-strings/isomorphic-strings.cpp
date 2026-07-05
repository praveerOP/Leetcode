class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char, char> mp;
        unordered_set<char> used;

        for (int i = 0; i < s.size(); i++) {

            char c1 = s[i];
            char c2 = t[i];

            if (mp.count(c1)) {
                if (mp[c1] != c2)
                    return false;
            } else {

                // c2 is already mapped by another character
                if (used.count(c2))
                    return false;

                mp[c1] = c2;
                used.insert(c2);
            }
        }

        return true;
    }
};