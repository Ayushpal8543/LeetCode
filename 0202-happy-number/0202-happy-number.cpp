class Solution {
public:
    int sqrtSum(int n){
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum += digit*digit;
            n /=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;

        while(true){
            slow=sqrtSum(slow);
            fast=sqrtSum(sqrtSum(fast));

            if(slow==fast)
              break;

        }
        return slow == 1;
    }
};