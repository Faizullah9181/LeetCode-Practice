class Solution {
public:
     
 int  solvemem(vector<int>& nums,  int n,vector<int> &dp){
        
        
        if (n<0) return 0;
        
        if(n==0) return nums[0];
        
        
        if(dp[n] != -1){
            
            return dp[n];
        }
        
     int   incl=solvemem(nums,n-2,dp)+nums[n];
     int   excl=solvemem(nums,n-1,dp)+0;
        
        dp[n]=max(incl,excl);
        
        return dp[n];
    }
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        
//         vector<int> dp;
        
//         dp.resize(n+1,-1);
     
        if(n==0) return 0;
        if(n==1) return nums[0];
        int dp[n];
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
      
        for(int i=2;i<n;++i) {
            dp[i]=max(dp[i-1], dp[i-2]+nums[i]);
        }
        return dp[n-1];
    }
        
       
};