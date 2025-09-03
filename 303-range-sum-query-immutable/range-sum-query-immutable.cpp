class NumArray {
private:
    vector<int> prefix; // Prefix sum array
    
public:
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size() + 1); // Size includes 0th index for empty range
        prefix[0] = 0; // Initialize first element as 0
        for (int i = 0; i < nums.size(); ++i) {
            prefix[i + 1] = prefix[i] + nums[i]; // Build prefix sum
        }
    }
    
    int sumRange(int left, int right) {
        return prefix[right + 1] - prefix[left]; // Range sum = prefix[right + 1] - prefix[left]
    }
};