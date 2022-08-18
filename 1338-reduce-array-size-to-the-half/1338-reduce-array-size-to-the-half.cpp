class Solution {
public:
    int minSetSize(vector<int>& arr) {
     unordered_map<int,int>madar;
    priority_queue<int>chod;
        for(int x:arr)
        {
            madar[x]++;
        }
        for(auto x:madar)
        {
            chod.push(x.second);
        }
        int ans=0,count=0;
        while(ans<=arr.size()/2-1)
        {
            count++;
            ans+=chod.top();
            chod.pop();
            
        }
        return count;
    }
};