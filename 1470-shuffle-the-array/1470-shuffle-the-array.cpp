class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> firstHalf;
        for(int i=0; i<n; i++)
        {
            firstHalf.push_back(nums[i]);
        }
        for(int i=0, j=n; i<n; i++,j++)
        {
            nums[2*i]=firstHalf[i];
            nums[2*i+1]=nums[j];
        }
        return nums;
    }
};