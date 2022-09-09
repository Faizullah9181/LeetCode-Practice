class Solution
{
    public:
        int numberOfWeakCharacters(vector<vector < int>> &properties)
        {
            sort(properties.begin(), properties.end(), [](vector<int> &a, vector<int> &b)
                {
                    if (a[0] == b[0])
                    {
                        return a[1] < b[1];
                    }
                    else
                    {
                        return a[0] > b[0];
                    }
                }

           );

            int maxiDef = INT_MIN;
            int count = 0;
            for (const vector<int> &v: properties)
            {
                if (v[1] < maxiDef)
                {
                    count++;
                }
                else
                {
                    maxiDef = v[1];
                }
            }
            return count;
        }
};