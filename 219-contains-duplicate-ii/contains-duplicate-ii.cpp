class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> numIndex; // Map to store number and its most recent index
        
        for (int i = 0; i < nums.size(); i++) 
        {
            
            if (numIndex.find(nums[i]) != numIndex.end()) {
                // If the difference between current and previous index is <= k
                if (i - numIndex[nums[i]] <= k) {
                    return true;
                }
            }
            // Update the most recent index for the current number
            numIndex[nums[i]] = i;
        }
        
        return false; // No nearby duplicate found
    }
};