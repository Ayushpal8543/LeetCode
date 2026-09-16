class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int maxval=arr[0];
        int maxIndex=0;
        for(int i=1;i<n;i++){
            if(arr[i]>maxval){
                maxval=arr[i];
                maxIndex=i;
            }
        }
        return maxIndex;
        
    }
};