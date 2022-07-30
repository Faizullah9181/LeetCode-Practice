class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        // sort(nums.begin(),nums.end());
        
        int sum=accumulate(nums.begin(), nums.end(), 0);
        
        int size= nums.size();
        
        size=size*(size+1)/2;
        
        return size-sum;
        
        
      
    }
};