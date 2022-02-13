/*
   //solution using recursion
class Solution {
    
    private:
    
    void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>>& ans){
        
        if(index>=nums.size()){
            ans.push_back(output);
            return;
            
        }
        
        solve(nums,output,index+1,ans);
        
        int element=nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums,output,index,ans);
        return ans;
    }
};
*/
//Using Bitwise Method
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        for(int i=0; i<(1<<n); ++i) {
            vector<int> sub;
            
            for(int j=0; j<n; ++j)
                if(i & (1<<j))
                    sub.push_back(nums[j]);
            ans.push_back(sub);
        }
        
        return ans;
    }
};
