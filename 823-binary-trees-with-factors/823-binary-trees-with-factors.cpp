const int mod = 1e9 + 7;
class Solution
{
    public:
        int numFactoredBinaryTrees(vector<int> &arr)
        {
            int n = arr.size();
            int ans = 0;
            map<int, long long > mp;
            sort(arr.begin(),arr.end());
            for (int i = 0; i < n; i++)
            {
                mp[arr[i]]++;
                for (int j = 0; j < i; j++)
                {
                    if (arr[i] % arr[j] == 0)
                    {

                        mp[arr[i]] += (mp[arr[j]] *mp[arr[i] / arr[j]]) % mod;
                        mp[arr[i]] %= mod;
                    }
                }
                ans = (ans + mp[arr[i]]) % mod;
            }
            return ans;
        }
};