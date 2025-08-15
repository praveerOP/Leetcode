class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum=nums[0],maxsum=nums[0];
        
        for (int i=1;i<nums.size();i++){
            int temp=currentsum + nums[i];
            currentsum = max(nums[i], temp);
            
            maxsum = max(maxsum, currentsum);
        }
        return  maxsum;
    }
};