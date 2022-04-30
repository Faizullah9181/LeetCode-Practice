class Solution {
    
private:
    double dfs(string start, string end, unordered_set<string> &vis, unordered_map<string, vector < pair<string, double>> > adj ){
        if((adj.find(start) == adj.end()) or (adj.find(end) == adj.end())) return -1.0;
        
        if(start == end) return 1.0;
        
        vis.insert(start);
        
        for(auto it : adj[start]){
            if(vis.find(it.first) == vis.end() ){
                auto res = dfs(it.first, end, vis, adj);
                if(res != -1.0){
                    return it.second *res;
                }
            }
        }
        
        return -1.0;
        
    }
    
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string, vector < pair<string, double>> > adj;
        
        for(int i = 0; i < equations.size(); i++){
            auto eq = equations[i];
            adj[eq[0]].push_back({eq[1], values[i] });
            adj[eq[1]].push_back({eq[0], 1/values[i]});
        }
        
        vector <double> ans;
        
        for(int i = 0; i < queries.size(); i++){
            auto q = queries[i];
            unordered_set<string> vis;
            auto res = dfs(q[0], q[1], vis, adj );
            ans.push_back(res);
        }
        
        return ans;
        
        
    }
};