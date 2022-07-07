class Solution
{
    public:
        vector<vector < int>> memo;

    int dp(int i, int j, string s1, string s2, string s3)
    {

        int k = i + j;

        int ans = 0;

        if (k == s3.size())
        {
            return true;
        }

        if (memo[i][j] != -1) return memo[i][j];

        if (i < s1.size() && s1[i] == s3[k])
        {

            ans |= dp(i + 1, j,s1,s2,s3);
        }

        if (j < s2.size() && s2[j] == s3[k])
        {

            ans |= dp(i, j + 1,s1,s2,s3);
        }

        return memo[i][j] = ans;
    }
    bool isInterleave(string s1, string s2, string s3)
    {
      

        if (s1.size() + s2.size() != s3.size()) return false;

        memo.resize(s1.size() + 1, vector<int> (s2.size() + 1, -1));

        return dp(0, 0,s1,s2,s3);
    }
};