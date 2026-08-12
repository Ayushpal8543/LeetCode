class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxEnd=nums[0];
        int minEnd=nums[0];
        int maxSum=nums[0];
        int minSum=nums[0];
        for(int i=1;i<nums.size();i++){
            maxEnd=max(nums[i],maxEnd+nums[i]);
            minEnd=min(nums[i],minEnd+nums[i]);
            maxSum=max(maxSum,maxEnd);
            minSum=min(minSum,minEnd);
        }
        return max(maxSum,abs(minSum));
    }
};