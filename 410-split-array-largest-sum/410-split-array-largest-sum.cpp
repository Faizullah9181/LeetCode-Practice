class Solution {
public:
    //check whether mid value can divide nums into m subarrays 
    bool isPossible(vector<int>&nums, int mid, int m)
    {
        int cnt=0, sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(sum+nums[i] <= mid) 
            {
                sum += nums[i];
            }
            else //when subarray's sum is greater than mid
            {
                cnt++; //increase count for another subarray
                sum = nums[i]; //put current value into it
                if(nums[i] > mid) return false; //if current value > mid return false
            }
        }
        if(cnt<m) return true; //if we can divide nums into m subarrays return true 
        return false; //otherwise false;
    }
    
    
    int splitArray(vector<int>& nums, int m) 
    {
        if(nums.size()<m) return -1;
        
        //find low (mini value in nums) and high (total sum of nums)
        int low=nums[0], high=0;
        for(auto it:nums)
        {
            low = min(low, it);
            high += it;
        }
        
        //use binary search approach
        while(low<=high)
        {
            int mid = (low+high)>>1;
            
            //if nums easily divided into m subarrays with mid value
            if(isPossible(nums, mid, m))
            {
                high = mid-1;
            }
            //if nums doesn't divide into m subarrays with mid value
            else
            {
                low = mid+1;
            }
        }
        return low; //it is the min. largest sum
        
    }
};