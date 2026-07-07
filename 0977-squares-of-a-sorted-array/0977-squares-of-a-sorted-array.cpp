class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> neg;
        vector<int> pos;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }else{
                pos.push_back(nums[i]);
            }
        }
        if(neg.size()==0){
            for(int i=0;i<n;i++){
                pos[i]=pos[i]*pos[i];
                
            }
            return pos;
        }
        if(pos.size()==0){
            for(int i=0;i<n;i++){
                neg[i]=neg[i]*neg[i];
                
            }
            reverse(neg.begin(),neg.end());
            return neg;
        }
        int i=0,j=0,id=0;
        int l=neg.size();
        int m=pos.size();
        vector<int> res(l+m);
        for(int i=0;i<l;i++){
            neg[i] = neg[i] * neg[i];
        }
        reverse(neg.begin(),neg.end());
        for(int i=0;i<m;i++){
            pos[i]=pos[i]*pos[i];
        }
        while(i<l && j<m){
            if(neg[i]<=pos[j]){
                res[id]=neg[i];
                id++;
                i++;
            }else{
                res[id]=pos[j];
                j++;
                id++;
            }
        }
        while(i<l){
            res[id]=neg[i];
            id++;
            i++;
        }
        while(j<m){
            res[id]=pos[j];
            id++;
            j++;
        }
        return res;
    }
};