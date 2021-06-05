class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        c0,c1,c2=0,0,0
        for i in nums:
            if(i==0):
                c0+=1
            elif(i==1):
                c1+=1
            elif(i==2):
                c2+=1
        l=[]
        while(c0>0):
            l.append(0)
            c0-=1
        while(c1>0):
            l.append(1)
            c1-=1
        while(c2>0):
            l.append(2)
            c2-=1
        for i in range(0,len(nums)):
            nums[i]=l[i]
