class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int maxCnt=INT_MIN;
        int cnt=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                cnt++;
            }
        }
        maxCnt=cnt;
        if(maxCnt==k){
            return maxCnt;
        }
        for(int i=k;i<n;i++){
            if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u'){
                cnt--;
            }
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                cnt++;
            }
            maxCnt=max(maxCnt,cnt);
        }
        return maxCnt;
    
    }
};