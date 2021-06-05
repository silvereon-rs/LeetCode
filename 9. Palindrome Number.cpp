class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n=x,last;
        long int num=0;
        while(n){
            last=n%10;
            n/=10;
            num=num*10+last;
        }
        return(num==x);
    }
};
