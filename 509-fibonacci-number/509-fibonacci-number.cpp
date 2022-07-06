class Solution {
public:
    int fib(int n) {
        
        
        int fi[n+2];
        
          fi[0]=0;
          
         fi[1]=1;
        
        
        for(int i =2;i<=n;i++){
            
            fi[i]=fi[i-1] +fi[i-2];
        }
        
        return fi[n];
    }
};