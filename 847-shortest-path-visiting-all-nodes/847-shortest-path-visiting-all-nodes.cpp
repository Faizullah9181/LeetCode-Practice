class Solution {
public:
    int solve(vector<vector<int>>& graph){
        int n = graph.size();
        int all = (1<<n)-1;
        queue<pair<int,pair<int,int>>> q;
        set<pair<int,int>> vis;
        for(int i=0;i<n;i++){
            int mask = (1<<i);
            q.push({i,{0,mask}});
            vis.insert({i,mask});
        }
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            int val = node.first, dist = node.second.first, mask = node.second.second;
            for(auto temp: graph[val]){
                int newmask = (mask |( 1<<temp));
                if(newmask==all)
                    return dist+1;
                else if(vis.count({temp, newmask}))
                    continue;
                vis.insert({temp, newmask});
                q.push({temp,{dist+1,newmask}});
            }
        }
    return 0;
    }
    
    int shortestPathLength(vector<vector<int>>& graph) {
        if(graph.size()==1) return 0;
        int ans = solve(graph);
        return ans;
    }
};

/*
In this question, we will try to explore all the paths and BFS will help us to find the shortest path.
We are using the bitmask to check which node is visited. We will insert each node into queue with the distance and respective bitmask.
Example of bit mask:

Ex :- if we visit to node 2, its bitmask is 100(2^2)
if we visit to node 3, its bitmask is 1000(2^3)
Take the OR of 2 & 3 -> 1100, it mean we have visited node 2 and node 3
So 1111 means we have already visited all the nodes.
This is the concept we are going to use to solve this problem.
If we find newmask is equal to mask of all the nodes that means we have got our answer,
Else the function will return 0.


---------Taken from one of the leetcodes submissions :(
*/
