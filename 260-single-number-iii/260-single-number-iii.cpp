class Solution
{
    public:
        vector<int> singleNumber(vector<int> &nums)
        {
            unordered_map<int, int> um;
            vector<int> arr;

            for (auto m: nums)
            {

                um[m]++;
            }

            for (auto m: um)
            {

                if (m.second == 2) continue;

                else

                    arr.push_back(m.first);
            }

            return arr;
        }
};