class Solution {
public:
    int fun(int n,int m,int guess){
        int cnt=0;
        for(int i=1;i<=m;i++){
            cnt+=min(n,guess/i);
        }
        return cnt;
    }
    int findKthNumber(int m, int n, int k) {
        int low=1,high=n*m;
        int res=-1;
        while(low<=high){
            int guess=low+(high-low)/2;
            int ans=fun(n,m,guess);
            if(ans<k){
                low=guess+1;
            }else{
                res=guess;
                high=guess-1;
            }
        }
        return res;
    }
};