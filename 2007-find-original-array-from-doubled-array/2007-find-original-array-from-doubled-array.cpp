class Solution
{
    public:
        vector<int> findOriginalArray(vector<int> &changed)
        {
            int n = changed.size();

            unordered_map<int, int> ump;

            vector<int> ans;

            if (n % 2 != 0) return ans;

            for (auto it: changed)
            {
                ump[it]++;
            }
            sort(changed.begin(), changed.end());

            for (auto it: changed)
            {
                if (ump[it] == 0) continue;

                if (ump[2 *it] == 0)
                {
                    return {};
                }

                if (ump[it] >= 1 && ump[2 *it] >= 1)
                {
                    ans.push_back(it);
                    ump[it]--;
                    ump[2 *it]--;
                }
            }

            return ans;
        }
};









