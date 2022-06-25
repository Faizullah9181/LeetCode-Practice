class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        vector<int> arr;
        
        
        for (int i = 0; i < matrix.size(); i++) { 
		for (int j = 0; j < matrix[i].size(); j++) { 
			arr.push_back(matrix[i][j]); 
		} 
	} 
               
//         for(int i=0;i<arr.size();i++){
        
//         if(arr[i]==arr[i+1]) return arr[k];
	
//         }
        
        sort(arr.begin(),arr.end());
        
    return arr[k-1];
    }
};