class Solution
{
    public:
        vector<int> arrayChange(vector<int> &nums, vector<vector< int>> &op)
        {

            unordered_map<int, int> ump;

            for (int i = 0; i < nums.size(); i++)
            {

                ump[nums[i]]=i;
            }

            for (int i = 0; i < op.size(); i++)
            {

                int k = ump[op[i][0]];

                nums[k] = op[i][1];
                ump.erase(op[i][0]);
                ump[op[i][1]] = k;
            }
            return nums;
        }
};


