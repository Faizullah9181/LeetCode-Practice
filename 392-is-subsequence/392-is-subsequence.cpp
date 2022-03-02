class Solution {
public:
   bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        if(s.size()>t.size()){
            return false;
        }
        bool pntr=true;
        while(i<s.size()&&j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
                pntr=true;
            }
            else{
                j++;
                pntr=false;
            }
        }
		
		
        if(i==s.size()){  
            return pntr;
        }
        return false;
    }
};