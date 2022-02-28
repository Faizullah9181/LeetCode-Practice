class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
		
        // No numbers in nums
        if(nums.size() == 0){
            return ans;
        }
        
        // Starting interval in the range
        int start = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            // Ending interval in the range
            int end = nums[i];
            
            // Not a consecutive number
            if(end-1 != nums[i-1]){
                // If start and end interval are same, then just store that number
                // Otherwise store as "start->end"
                if(start == nums[i-1])
                    ans.push_back(to_string(start));
                else
                    ans.push_back(to_string(start) + "->" + to_string(nums[i-1]));
                start = end;
            }
        }
        
        if(start == nums.back())
            ans.push_back(to_string(start));
        else
            ans.push_back(to_string(start) + "->" + to_string(nums.back()));
        
        return ans;
    }
};