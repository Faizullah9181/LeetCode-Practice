class Solution
{
    public:
        int singleNumber(vector<int> &nums)
        {

           	//             int ones = 0, twos = 0;

           	//             for (int i = 0; i < nums.size(); i++)
           	//             {

           	//                 ones = (ones ^ nums[i]) &(~twos);
           	//                 twos = (twos ^ nums[i]) &(~ones);
           	//             }
           	//             return ones;

            unordered_map<int, int> um;
            int num;

            for (auto m: nums)
            {

                um[m]++;
            }

            for (auto m: um)
            {

                if (m.second == 3) continue;

                else

                    num = m.first;
            }

            return num;
        }
};