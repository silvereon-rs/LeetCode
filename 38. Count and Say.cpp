class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
    
        string s=countAndSay(n-1);
        int c=0;
        string result="";
        for(int i=0;i<s.length();i++){
            if(i<s.length()-1 && s[i]==s[i+1]){
                c++;
            }
            else{
                c++;
                result=result+to_string(c)+s[i];
                c=0;
            }
        }
        return result;
    }
};
