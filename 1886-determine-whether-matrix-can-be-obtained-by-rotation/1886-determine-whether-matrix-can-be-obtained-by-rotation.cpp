class Solution
{
    public:
        bool findRotation(vector<vector < int>> &mat, vector< vector< int>> &target)
        {

            int m = mat.size();
            int n = mat[0].size();
            
            
            if (mat == target)

                    return true;

           int t = 3;

            while (t--)
            {

                

                for (int i = 0; i < m; i++)
                {

                    for (int j = 0; j < i; j++)
                    {

                        swap(mat[i][j], mat[j][i]);
                    }
                }

                for (int i = 0; i < m; i++)
                {

                    reverse(mat[i].begin(), mat[i].end());
                }

                if (mat == target)

                    return true;
            }

            return false;
        }
};