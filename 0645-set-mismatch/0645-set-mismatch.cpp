class Solution
{
    public:
        vector<int> findErrorNums(vector<int> &nums)
        {

            map<int, int> ump;

            vector<int> ans;

            for (int i = 0; i < nums.size(); i++)
            {

                ump[nums[i]]++;
            }

  for (int i = 1; i <= nums.size(); i++)
            {

                if (ump[i] == 2)
                {
                    ans.push_back(i);
                }
            }

            for (int i = 1; i <= nums.size(); i++)
            {

                if (ump[i] == 0)
                {
                    ans.push_back(i);
                }
            }

            return ans;
        }
};