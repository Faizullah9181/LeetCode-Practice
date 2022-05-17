class Solution {
public:
    
    int partition(vector<int>& nums, int s, int e) {
        int pivot = nums[e];
        int i =s;
        for(int j=s; j<=e-1; j++) {
            if(nums[j] > pivot) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
        
        swap(nums[i], nums[e]);
        return i;
    }
    
     int quickSelect(vector<int>& nums, int k, int s, int e) {
        int id = partition(nums, s, e);
        if(id == k-1) return nums[k-1];
        else if(id < k-1) {
            // search right part
            return quickSelect(nums, k, id+1, e);
        } else {
            //search left part
            return quickSelect(nums, k, s, id-1);
        }
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        if(k>nums.size()) {
            // if k is larger than nums.size, this is not a valid scenario
            return -1;
        } else {
            int s = 0;
            int e =nums.size()-1;
            return quickSelect(nums, k, s, e);
        }
    }
    
    
    
   
};