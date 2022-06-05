class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       
        
        reverse(matrix.begin(), matrix.end());
        int m=matrix.size();
        int n=matrix[0].size();
        
        
        for(int i=0;i<m;i++){
            for(int j=0;j<i;j++){
                
          
                swap(matrix[i][j],matrix[j][i]);

            }
        }
       
    }
};