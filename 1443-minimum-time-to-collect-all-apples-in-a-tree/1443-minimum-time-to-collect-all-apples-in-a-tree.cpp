class Solution
{
    public:

        int dfs(int curNode, int par, vector<vector < int>> &adj, vector< bool > &hasApple)
        {
            int totalCost = 0;

            if (curNode > 0 and hasApple[curNode])
                totalCost += 2;

            for (int i = 0; i < adj[curNode].size(); i++)
            {
                int to = adj[curNode][i];
                if (to == par) continue;
                totalCost += dfs(to, curNode, adj, hasApple);
            }

            if (curNode > 0 and!hasApple[curNode] and totalCost > 0)
                totalCost += 2;

            return totalCost;
        }

    int minTime(int n, vector<vector < int>> &edges, vector< bool > &hasApple)
    {
        vector<vector < int>> adj(n);
        for (auto edge: edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        int res = dfs(0, -1, adj, hasApple);
        return res;
    }
};