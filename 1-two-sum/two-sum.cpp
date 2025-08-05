class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Map: complement -> index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                return {i, numMap[complement]};
            }
            numMap[nums[i]] = i;
        }
        
        return {};
    }
};