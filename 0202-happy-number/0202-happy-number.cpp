class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visited;
        while(n!=1){
          if(visited.count(n)){
            return false;
          }
          visited.insert(n);
          int sum=0;
          while(n>0){
              int num=n%10;
              sum=(num*num)+sum;
              n/=10;
  
          }
          n=sum;
        }
          
          
        return true;
    }  
  
};