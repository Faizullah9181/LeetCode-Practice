class Solution {
public:
    int sgn(int x){
        
        if(x>0) return 1;
        
        if(x<0) return -1;
        
        return 0;            
    }
    
    int wiggleMaxLength(vector<int>& nums) {
        
    int n= nums.size();
    
    int ans=1;
        
    int previous_sign=0;
        
        for(int i=1;i<n;i++){
            
            int curr_sign=sgn(nums[i]-nums[i-1]);
            
            
            if(curr_sign != previous_sign and curr_sign !=0){
            
            ans++;
            
            previous_sign=curr_sign;
            }
                
        }
        
        return ans;
        
    }
};