class Solution {
public:
    vector<vector<int>>ans;
    void generate(vector<int>& candidates,vector<int>& res,int index,int cur,int& target){
        if(cur==target){
            ans.push_back(res);
            return;
        }
        
        if(index<candidates.size() && (cur + candidates[index]<=target)){
            res.push_back(candidates[index]);
            generate(candidates,res,index,cur+candidates[index],target);
            res.pop_back();
            generate(candidates,res,index+1,cur,target);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>res;
        generate(candidates,res,0,0,target);
        
        return ans;
    }
};