class Solution:
    def reverse(self, x: int) -> int:
        n=int(x)
        if(x<0):
            n=0-n
        l=[]
        while(n>0):
            l.append(n%10)
            n//=10
        res=0
        start=1
        for i in l:
            if(i==0 and start==1):
                start=0
                pass
            else:
                start=0
                res=res*10+i
        if(x<0):
            res=0-res
        if(res>(2**31-1) or res<(-2**31)):
            return(0)
        return(res)
