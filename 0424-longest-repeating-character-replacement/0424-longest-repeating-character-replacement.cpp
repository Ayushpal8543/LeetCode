class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int maxFreq = 0;
        int ans = 0;
        unordered_map<char,int> mp;
        for(int high=0; high<s.size(); high++) {
            mp[s[high]]++;
            maxFreq = max(maxFreq, mp[s[high]]);
    
            while((high-low+1)-maxFreq > k) {
    
                mp[s[low]]--;
                low++;
            }
    
            ans = max(ans, high-low+1);
        }
    
        return ans;
    }
};