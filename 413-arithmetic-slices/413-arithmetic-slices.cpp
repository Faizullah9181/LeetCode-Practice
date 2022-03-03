class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {  
        int res=0,temp=0;
        
        int n = nums.size();
        
        if(n<=2) return 0;
        
        int diff=nums[1]-nums[0];
        
        for(int i=2;i<n;i++){
            temp=0;
            while(i<n && nums[i]==nums[i-1]+diff){
                temp++;
                i++;
            }
            
            if(i<n) diff = nums[i]-nums[i-1];
            res = res + temp*(temp+1)/2;
        }
        
        return res;
    }
};