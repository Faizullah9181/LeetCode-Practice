class Solution
{
public:
    vector<vector<int>> subsetss;

    void helper(vector<int> &subset, int i, vector<int> &nums)
    {

        if (i == nums.size())
        {
            subsetss.push_back(subset);
            return;
        }

            subset.push_back(nums[i]);
            helper(subset, i + 1, nums);

        subset.pop_back();
    
        while(i+1 < nums.size() && nums[i]==nums[i+1]) i++;
        
        helper(subset, i + 1, nums);

        
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
         sort(nums.begin(),nums.end());
        vector<int> empty;

        helper(empty, 0, nums);
        
        sort(subsetss.begin(),subsetss.end());
        return subsetss;
    }
};