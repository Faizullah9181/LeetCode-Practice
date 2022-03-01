class Solution {
  public:
    vector<int> countBits(int n) {
        vector<int> dp(n + 1, 0);
        // Prev is the previous power of 2
        int prev = 1;
        for(int i = 1; i <= n; i++) {
            // Time to update the previous power
            if(i == prev * 2) 
                
            {prev *= 2;
            
            }    
             dp[i] = 1 + dp[i - prev];
        
        }
        
        return dp;
    }
};