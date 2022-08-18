class Solution
{
    public:
        int minSetSize(vector<int> &arr)
        {

            int n = arr.size();
            int i;
            map<int, int> m;

            for (auto it: arr)
            {

                m[it]++;
            }

            vector<int> ans;

            for (auto i: m)
            {

                ans.push_back(i.second);
            }

            sort(ans.rbegin(), ans.rend());

            int cnt = 0;

            int total = n;

            for (auto i: ans)
            {
                if (total <= n / 2)
                {
                    break;
                }
                cnt++;
                total -= i;
            }
            return cnt;
        }
};