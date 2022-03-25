class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b) {
        return a[1]-a[0]>b[1]-b[0];   
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int ans=0;
        int n=costs.size();
        sort(costs.begin(),costs.end(),comp);
        for(int i=0;i<n;i++) {
            if(i<n/2) {
                ans+=costs[i][0];
            }
            else {
                ans+=costs[i][1];
            }
        }
        return ans;
        
    }
};