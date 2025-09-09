class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> sum_freq; // Maps cumulative sum to its frequency
        sum_freq[0] = 1; // Initialize for subarrays starting from index 0
        long long curr_sum = 0; // Current cumulative sum
        int count = 0; // Count of subarrays with sum k
        
        for (int num : nums) {
            curr_sum += num; // Update cumulative sum
            // If (curr_sum - k) exists, add its frequency to count
            if (sum_freq.find(curr_sum - k) != sum_freq.end()) {
                count += sum_freq[curr_sum - k];
            }
            // Update frequency of current sum
            sum_freq[curr_sum]++;
        }
        
        return count;
    }
};