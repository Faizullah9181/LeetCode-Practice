class Solution
{
    public:

        void markIsland(vector<vector < char>> &grid, int i, int j, int r, int c)
        {

            if (i < 0 || i >= r || j < 0 || j >= c || grid[i][j] != '1')
            {
                return;
            }

            grid[i][j] = 'VISITED';

            markIsland(grid, i - 1, j, r, c);
            markIsland(grid, i + 1, j, r, c);
            markIsland(grid, i, j + 1, r, c);
            markIsland(grid, i, j - 1, r, c);
        }

    int numIslands(vector<vector < char>> &grid)
    {

        int rows = grid.size();
        int cols = grid[0].size();

        if (rows == 0)
        {
            return 0;
        }

        int ans = 0;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == '1')
                {
                    markIsland(grid, i, j, rows, cols);
                    ans++;
                }
            }
        }
        return ans;
    }
};