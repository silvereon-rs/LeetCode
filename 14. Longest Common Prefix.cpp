class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        int count=0;
        int curr=0;
        for(int i=0;i<strs.size();i++){
            curr=0;
            if(i==0){
                s=strs[0];
                count=s.size();
            }
            
            if(i!=0){
                for(int j=0;j<min(s.size(),strs[i].size());j++){
                    if(s[j]==strs[i][j]){
                        curr++;
                    }
                    if(s[j]!=strs[i][j]){
                        break;
                    }
                }
                count=min(count,curr);
            }
        }
        string st="";
        for(int i=0;i<count;i++){
            st+=s[i];
        }
        return st;
    }
};
