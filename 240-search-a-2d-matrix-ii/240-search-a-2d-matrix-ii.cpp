// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//         vector<int> arr;
//         int ans;
        
//         for (int i = 0; i < matrix.size(); i++) { 
// 		for (int j = 0; j < matrix[i].size(); j++) { 
// 			arr.push_back(matrix[i][j]); 
// 		} 
// 	} 

      
   
        
//         for(int i=0;i<arr.size();i++){
            
//             if(arr[i]==target)
                
//             return true;
            
             
        
            
//         }
           
    
//         return false;
//     }
// };


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int r=0,c=m-1;
        while(r<n && c>=0){
            if(matrix[r][c]==target){
                return true;
            }
            if(matrix[r][c]>target)
                c--;
            else
                r++;
        }
        return false;
    }
};