class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        int n=nums.size(),cnt=0;
        
    sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            
            if(nums[i]==nums[i+1] ){
                
                cnt=nums[i];
                break;
            }
            
           
            
        }
        
        return cnt;
        
        
    }
};