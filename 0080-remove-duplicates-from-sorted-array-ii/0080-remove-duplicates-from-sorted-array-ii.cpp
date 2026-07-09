class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2){
            return n;
        }
        int size=2;
        for(int i=2;i<n;i++){
            if(nums[i]!=nums[size-2]){
                nums[size] = nums[i];
                size++;
            }
        }
        return size++;
    }
};