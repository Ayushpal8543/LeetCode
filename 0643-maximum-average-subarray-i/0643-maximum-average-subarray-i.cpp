class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<k) return 0;
       
        double sum=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        double maxAvg=sum/k;
        if(n==k){
            return maxAvg;
        }
        for(int i=k;i<n;i++){
            sum=sum-nums[i-k]+nums[i];
            double avg=sum/k;
            maxAvg = max(maxAvg,avg);
        }
        return maxAvg;
    }
};