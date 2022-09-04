class Solution
{
    public:
        bool findSubarrays(vector<int> &v)
        {
            int sz = v.size();
            unordered_map<int, int> mp;
            for (int i = 0; i < sz - 1; ++i)
            {
                mp[v[i] + v[i + 1]]++;
            }
            for (auto it: mp)
            {
                if (it.second > 1)
                {
                    return true;
                }
            }
            return false;
        }
};