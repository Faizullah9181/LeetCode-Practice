class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        int n=pushed.size();
        stack<int> s;
        int j=0;
        
        for(int i=0;i<n;i++)
        {
            s.push(pushed[i]);
            
            while(j<n && !s.empty() && popped[j]==s.top())
            {
                s.pop();
                j++;
            }
        }
        
        while(j<n && !s.empty() && popped[j]==s.top())
        {
            s.pop();
            j++;
        }
        
       return s.empty(); 
    }
};