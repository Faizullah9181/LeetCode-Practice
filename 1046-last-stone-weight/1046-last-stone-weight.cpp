class Solution {
public:

int lastStoneWeight(vector<int>& stones) {
    //use priority_queue because it will sort the array in big-small
    priority_queue<int> q;
    //n no of element
    int n = stones.size();
    //put the value in q
    for(int i=0;i<n;++i)
        q.push(stones[i]);
    //e1 and e2 are 1st two value
    int e1,e2;
    while(n>1){
        // remove 1st two value
        e1=q.top();
        q.pop();
        e2=q.top();
        q.pop();
        //size decrese by 2
        n=n-2;
        //check e1-e2 is greater than 0 if yess then put that value in q and increment n by one
        if(e1-e2>0){
            q.push(e1-e2);
            n+=1;
        }
    }
    //check if q has one value so return that value or return 0
    if(!q.empty())
        return q.top();
    return 0;
}
};