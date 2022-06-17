class Solution {
public:
    
 int  solve(vector<int>& nums){
        
        
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
        
    
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        
        vector<int> first;
        vector<int> second;
     
        if(n==1)  return nums[0];
        
       for(int i=0;i<n;i++){
           
           if( i != n-1)
               first.push_back(nums[i]);
           
           if( i != 0)
               second.push_back(nums[i]);
       }
        
        
        
        
        int ans=max(solve(first),solve(second));
        
        return ans;
    }
};