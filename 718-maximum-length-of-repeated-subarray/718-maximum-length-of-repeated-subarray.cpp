class Solution
{
    public:
        int findLength(vector<int> &A, vector<int> &B)
        {

            int n = B.size();

            vector<int> dp(n + 1, 0);
            int ans = 0;

            for (int i = 0; i < A.size(); i++)
            {
                for (int j = n - 1; j >= 0; j--)
                {

                    if (A[i] == B[j])
                    {
                        dp[j + 1] = 1 + dp[j];
                    }
                    else
                    {
                        dp[j + 1] = 0;
                    }

                    ans = max(ans, dp[j + 1]);
                }
            }

            return ans;
        }
};