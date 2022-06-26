class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
        
        
        
        int row=matrix.size(),col=matrix[0].size();
        
        int start = 0;
      
        int end = row * col - 1;

    while(start <= end){
        int mid = start + (end - start)/2;
        int val = matrix[mid/col][mid%col];
        if(val == target) return true;
        if(val < target) start = mid + 1;
        if(val > target) end = mid - 1;
    }

    return false;
    }
};