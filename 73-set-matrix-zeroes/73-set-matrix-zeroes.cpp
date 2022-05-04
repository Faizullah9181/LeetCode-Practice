class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        int row[m];
        int col[n];
        
        for(int i=0;i<m;i++)
            row[i]=false;
        
        
        for(int i=0;i<n;i++)
            col[i]=false;
        
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
         }
        
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if( row[i]==true  ||  col[j]==true)
                {
                    v[i][j]=0;
                }
            }
         }
        
    }
};