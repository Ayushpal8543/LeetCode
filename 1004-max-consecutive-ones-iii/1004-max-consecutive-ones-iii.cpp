class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int maxLen=INT_MIN;
        int low=0;
        unordered_map<int,int> mp;
        for(int high=0;high<n;high++){
            mp[nums[high]]++;
            while(mp[0]>k){
                int len=high-low+1;
                mp[nums[low]]--;
                low++;
            }
            int len=high-low+1;
            maxLen=max(maxLen,len);

        }
        return maxLen;
    }
};