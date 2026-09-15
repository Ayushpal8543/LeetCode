class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=-1;
        int last=-1;
        //first occ
        int low=0,high=n-1;
        while(low<=high){
            int guess=low+(high-low)/2;
            if(nums[guess]<target){
                low=guess+1;
            }
            else if(nums[guess]>target){
                high=guess-1;
            }
            else{
                first=guess;
                high=guess-1;
            }
        }
        // last occ
        low=0,high=n-1;
        while(low<=high){
            int guess=low+(high-low)/2;
            if(nums[guess]<target){
                low=guess+1;
            }
            else if(nums[guess]>target){
                high=guess-1;
            }
            else{
                last=guess;
                low=guess+1;
            }
        }
        return {first,last};
        
    }
};