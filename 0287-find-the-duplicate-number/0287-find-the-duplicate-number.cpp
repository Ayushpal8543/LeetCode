class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=i+1;
        while(nums[i]!=nums[j]){
            i++;
            j++;

        }
        return nums[i];
    }
};