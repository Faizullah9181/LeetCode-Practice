class Solution {
public:
    
      int solve(vector<int>& cost, int n){
            
            
            if(n==0)  return cost[0];
            
            if(n==1)  return cost[1];
            
            
            int ans= cost[n]+min(solve(cost,n-1),solve(cost,n-2));
            
            
            return ans;
        }
    
     int solvedp(vector<int>& cost, int n,vector<int>& dp){
            
            
            if(n==0)  return cost[0];
            
            if(n==1)  return cost[1];
         
           if (dp[n] != -1)
        return dp[n];

            
            
             dp[n]= cost[n]+min(solvedp(cost,n-1,dp),solvedp(cost,n-2,dp));
            
            
            return dp[n];
        }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
      
        
        
     int  n= cost.size();
        
//         int ans= min(solve(cost,n-1),solve(cost,n-2));
        
        
//         return ans;
        
        
    vector<int> dp;
        
        dp.resize(n+1,-1);
        
          int ans= min(solvedp(cost,n-1,dp),solvedp(cost,n-2,dp));
                
         
        
        return ans;
        
        
    }
};