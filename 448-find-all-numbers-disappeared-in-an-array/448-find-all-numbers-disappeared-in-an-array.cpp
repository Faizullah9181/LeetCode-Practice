class Solution
{
    public:
        vector<int> findDisappearedNumbers(vector<int> &nums)
        {

            int n = nums.size();

            vector<int> freq(n + 1, 0);

            for (int i = 0; i < n; i++)
            {
                freq[nums[i]]++;
            }

         nums.clear();
            for (int i = 1; i <= n; i++)
            {
                if (!freq[i])
                {
                    nums.push_back(i);
                }
            }

            return nums;
        }
};