class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        int digit;
        while(n>0){
            digit=n%10;
            sum+=digit;
            product*=digit;
            n/=10;
        }
        return product-sum;
    }
};