class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int m, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (m == nums[i])
            {
                cnt++;
            }
            else
            {
                if (cnt == 0)
                {
                    m = nums[i];
                    cnt++;
                }
                else
                    cnt--;
            }
        }

        return m;
    }
};