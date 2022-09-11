class Solution
{
    public:
        int countPrimes(int n)
        {

            int count = 0;

            vector<bool> vec(n, true);
            for (int i = 2; i < n; i++)
            {
                if (vec[i] != 0)
                {
                    count++;
                    for (int j = i * 2; j < n; j += i)
                    {

                        vec[j] = 0;
                    }
                }
            }
            return count;
        }
};