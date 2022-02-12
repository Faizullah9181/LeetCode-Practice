// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {    
        int cnt1=0;
        int cnt2=0;
        int cnt0=0;
        // coode here 
        
        for(int i=0;i<n;i++){
            if(a[i]==0){
                cnt0++;
            }
            else if(a[i]==1){
                cnt1++;
            }
            
            else{
                cnt2++;
            }
        }
        
        int k=0;
        for(int i=0;i<cnt0;i++){
            a[k++]=0;}
            for(int i=0;i<cnt1;i++){
            a[k++]=1;}
            for(int i=0;i<cnt2;i++){
            a[k++]=2;}
        
    }
    
    
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends