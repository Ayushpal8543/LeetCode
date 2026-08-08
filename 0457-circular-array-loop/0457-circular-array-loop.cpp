class Solution {
public:
    int nextIndex(vector<int>& nums, int i){
        int n = nums.size();

        return ((i+nums[i])% n+n)%n;
    }
    bool circularArrayLoop(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            bool forward=nums[i]>0;
            int slow=i;
            int fast=i;

            while(true){
                int nextSlow = nextIndex(nums,slow);
                if(nums[nextSlow]>0 != forward)
                  break;

                if(nextSlow == slow)
                  break;

                slow=nextSlow;

                int nextFast = nextIndex(nums,fast);

                if((nums[nextFast]>0) != forward)
                  break;

                if(nextFast == fast)
                  break;   

                int nextFast2 = nextIndex(nums,nextFast);

                if((nums[nextFast2]>0) != forward)
                  break;

                if(nextFast2 == nextFast)
                  break;  

                fast = nextFast2;

                if(slow == fast)
                  return true;      
            }
        }
        return false;
    }
};