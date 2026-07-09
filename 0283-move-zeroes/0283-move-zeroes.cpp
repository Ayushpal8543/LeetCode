class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int c=0,j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                c++;
                nums[j]=nums[i];
                j++;
            }
        }
        for(int i=c;i<n;i++){
            nums[i]=0;
        }
    }
};