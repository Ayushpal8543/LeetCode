class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int res=0;
        int low=0;
        unordered_map<char,int> mp;
        for(int high=0;high<n;high++){
            mp[s[high]]++;
            int len=high-low+1;
            int maxFreq = 0;
            for(auto it : mp)
               maxFreq = max(maxFreq, it.second);

            int diff = len - maxFreq;
            
            while(diff>k){
                mp[s[low]]--;
                if(mp[s[low]]==0)
                   mp.erase(s[low]);
                low++;
               
                len=high-low+1;
                maxFreq=0;
                for(auto it : mp)
                   maxFreq = max(maxFreq, it.second);

                diff = len - maxFreq;
            }
            res=max(res,high-low+1);

        }
        return res;
    }
};