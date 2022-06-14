class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         
        
        if(nums.size()==0)  return 0;
       
        
        int n=nums.size(), dp[n+1];
 
        dp[0]=nums[0];
  
      
        
        for(int i=1;i<nums.size();i++)
      
            
        dp[i]=max(nums[i],nums[i]+dp[i-1]);
  
       
        
        sort(dp,dp+n);
        
        
        return dp[n-1];
}


    
};