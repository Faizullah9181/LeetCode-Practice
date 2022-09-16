// class Solution
// {
//     public:
//         int fun(vector<int> &nums, int start, int end, int i, vector<int> &multipliers, int n)
//         {

//             if (end < start || i >= n)
//                 return 0;

//  int sp= nums[start] *multipliers[i] + fun(nums, start + 1, end, i + 1, multipliers, n);

//  int ep = nums[end] *multipliers[i] + fun(nums, start, end - 1, i + 1, multipliers, n);

//             return max(sp, ep);
//         }
//     int maximumScore(vector<int> &nums, vector<int> &multipliers)
//     {
    
//         return fun(nums, 0, nums.size() - 1, 0, multipliers, multipliers.size());
//     }
// };


class Solution {
public:
    int fun(vector<vector<int>>& dp,vector<int>& nums,int start,int end,int i,vector<int>& multipliers,int n){
	
        if(end<start||i>=n||start>=n)
            return 0;
		
        if(dp[start][i]!=INT_MAX)
            return dp[start][i];
	
        int pickstart=(nums[start]*multipliers[i])+fun(dp,nums,start+1,end,i+1,multipliers,n);
	
        
         int pickend=(nums[end]*multipliers[i])+fun(dp,nums,start,end-1,i+1,multipliers,n);
        return dp[start][i]=max(pickstart,pickend);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int m=multipliers.size();
	
        vector<vector<int>> dp(m+1,vector<int>(m+1,INT_MAX));
        return fun(dp,nums,0,nums.size()-1,0,multipliers,m);     
    }
};