class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int n=columnTitle.size();
        int ans = 0;
        for(int i=0; i<n; i++) {
            
        ans += (columnTitle[i]-'A'+1)*pow(26,n-i-1);
        
        
        }
        
        
        return ans;
    }
};



/*

AA --> 26*1+ 1 = 27 (A == 1)
AB --> 26*1+ 2 = 28 (B ==2)
AC -->26*1 + 3 = 29 (C == 3)

*/