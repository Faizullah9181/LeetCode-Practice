class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1; i<nums.size();i++){
            int sum=0;
            
            nums[i]=nums[i]+ nums[i-1];
        }
    return nums;
    }
    
    
};