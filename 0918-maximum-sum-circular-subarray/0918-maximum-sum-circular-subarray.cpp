class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int ts=nums[0];
        int maxEnd=nums[0];
        int maxSum=nums[0];
        int minEnd=nums[0];
        int minSum=nums[0];

        for(int i=1;i<nums.size();i++){
            ts += nums[i];
            maxEnd = max(nums[i],maxEnd+nums[i]);
            maxSum = max(maxSum,maxEnd);
            minEnd = min(nums[i],minEnd+nums[i]);
            minSum = min(minSum,minEnd);
        }
        if(maxSum<0) return maxSum;
        return max(maxSum,ts-minSum);
    }
};