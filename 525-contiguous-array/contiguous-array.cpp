class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int max_len = 0;
        int prefix = 0;
        unordered_map<int, int> seen;
        seen[0] = -1;
        for (int i = 0; i < nums.size(); ++i) {
            prefix += (nums[i] == 1 ? 1 : -1);
            if (seen.count(prefix)) {
                max_len = max(max_len, i - seen[prefix]);
            } else {
                seen[prefix] = i;
            }
        }
        return max_len;
    }
};