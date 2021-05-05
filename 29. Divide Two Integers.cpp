class Solution {
public:
    int divide(int dividend, int divisor) {
        unsigned int q=0;
        int sign=0;
        unsigned int divi=dividend;
        unsigned int disr=divisor;
        if((dividend>2147483647 && divisor==1) || divisor>2147483647)
        {
            return 2147483647;
        }
        else if((dividend<=-2147483648))
        {
            if(divisor==1)
            {
                return -2147483648;
            }
            else if(divisor==-1)
            {
                return 2147483647;
            }
        }
        if(divisor<0)
        {
            disr=0-disr;
            sign=1;
        }
        if(dividend<0)
        {
            divi=0-divi;
            if(sign==1)
                sign=0;
            else
                sign=1;
        }
            
        while(divi>=disr)
        {
            divi-=disr;
            q++;
        }
        if(sign==1)
        {
            q=0-q;
        }
        return q;
    }
};
