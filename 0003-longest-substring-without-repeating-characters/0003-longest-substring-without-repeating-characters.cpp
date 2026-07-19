class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            int n=s.size();
            int low=0;
            int res=INT_MIN;
            unordered_map<char,int> mp;
            for(int high=0;high<n;high++){
                mp[s[high]]++;
                int len=high-low+1;
                while(mp.size()<len){
                    mp[s[low]]--;
                    if(mp[s[low]]==0){
                        mp.erase(s[low]);
                    }
                    low++;
                    len=high-low+1;
                }
                len=high-low+1;
                res=max(res,len);

                

            }
            if(res==INT_MIN){
                return 0;
            }
            return res;
    }
};