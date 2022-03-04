class Solution {
public:
    double champagneTower(int n, int r, int c) {
        vector<vector<double>> dp(101,vector<double>(105,0)); //stores amount of water in ith row && jth col 
        dp[0][0] = n;
        for(int i = 0; i<100;++i){
            for(int j = 0; j<=i;j++){
                if(dp[i][j]<1) continue;  // if cup is full
                else{
                    double k = dp[i][j] -1; //amt of overflowing champagne
                    dp[i][j] = 1;
                    dp[i+1][j+1] += k/2; //add the equal amt of champagne to its children
                    dp[i+1][j] +=k/2;
                }
            }
        }
        return dp[r][c];        
    }
};