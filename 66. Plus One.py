class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry=1
        for i in range(len(digits)-1,0,-1):
            if(carry==1):
                if(digits[i]==9):
                    digits[i]=0
                    carry=1
                else:
                    digits[i]+=1
                    carry=0
        if(digits[0]==9 and carry==1):
            digits[0]=0
            digits.insert(0,1)
        elif(digits[0]!=9 and carry==1):
            digits[0]+=1
        return digits
            
