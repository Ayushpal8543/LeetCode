class Solution {
public:
    int maximumSum(vector<int>& arr) {
        if(arr.empty()) return 0;
        int noDel = arr[0];
        int oneDel = INT_MIN;
        int res = arr[0];
        for(int i=1;i<arr.size();i++){
            int prevNoDel = noDel;
            noDel = max(arr[i],noDel + arr[i]);
            if(oneDel==INT_MIN){
                oneDel = prevNoDel;
            }else{
                oneDel = max(prevNoDel, oneDel+arr[i]);
            }
            res = max({res,oneDel,noDel});
        }
        return res;
    }
};