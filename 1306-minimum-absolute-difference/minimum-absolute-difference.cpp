
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        
        // Sort the array to ensure minimum differences are between adjacent elements
        sort(arr.begin(), arr.end());
        
        // Find the minimum absolute difference
        int minDiff = INT_MAX;
        for (int i = 0; i < arr.size() - 1; i++) {
            minDiff = min(minDiff, arr[i + 1] - arr[i]);
        }
        
        // Collect all pairs with the minimum difference
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i + 1] - arr[i] == minDiff) {
                result.push_back({arr[i], arr[i + 1]});
            }
        }
        
        return result;
    }
};
