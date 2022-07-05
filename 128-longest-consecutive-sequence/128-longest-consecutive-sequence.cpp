class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end()); 
        
        if(nums.size()==0)
        {
            
            return 0;
            
        }
        
        int count=1, maxCount=1, pre=nums[0]; 
        
        for(int i=1; i<nums.size(); i++){ 
            if(pre+1 == nums[i]) 
                count++; 
            else if (pre!=nums[i]){
                count=1; 
            } 
        
            pre=nums[i]; 
            
            maxCount= max(maxCount,count); 
        } 
        return maxCount;
    }
};