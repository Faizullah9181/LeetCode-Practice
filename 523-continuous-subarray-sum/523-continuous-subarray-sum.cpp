class Solution
{
    public:
        bool checkSubarraySum(vector<int> &v, int k)
        {
            unordered_map<int, int> m;
            int sum = 0;
            m[0] = -1;
            for(int i = 0; i < v.size(); i++)
            {  
                
                
                sum += v[i];
                sum = sum % k;
                if (m.find(sum) == m.end())
                    m[sum] = i;

                else
                {
                    if (i - m[sum] > 1) return true;
                }
            }

            return false;
        }
};