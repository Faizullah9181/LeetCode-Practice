class Solution
{
    public:

        bool containsNearbyDuplicate(vector<int> &nums, int k)
        {
            int prev, len = nums.size();
            unordered_map<int, int> mm;

            for (int i = 0; i < len; i++)
            {

                if (mm.find(nums[i]) == mm.end())
                {
                    mm[nums[i]] = i;
                }
                else
                {
                    prev = mm[(nums[i])];
                    if (i - prev <= k) return true;
                    mm[nums[i]] = i;
                }
            }

            return false;
        }
};