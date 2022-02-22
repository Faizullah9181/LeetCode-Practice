class Solution {
public:
    int titleToNumber(string columnTitle) {
        
       int res = 0;
        for(int i = 0; i < columnTitle.size(); ++i){
            res*=26;
            res += (columnTitle[i] - 'A') + 1;
        }
        return res;
    }
};



/*

AA --> 26*1+ 1 = 27 (A == 1)
AB --> 26*1+ 2 = 28 (B ==2)
AC -->26*1 + 3 = 29 (C == 3)

*/