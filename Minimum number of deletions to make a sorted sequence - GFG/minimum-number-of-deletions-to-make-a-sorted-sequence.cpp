//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int lisbinary(int arr[], int n)
{
    int lis[n];
    lis[0] = arr[0];
    int len = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > lis[len - 1])
        {
            lis[len] = arr[i];
            len++;
        }
        else
        {
            int c = lower_bound(lis, lis + len, arr[i]) - lis;
            lis[c] = arr[i];
        }
    }
    return len;
}
	int minDeletions(int arr[], int n) 
	{ 
	    // Your code goes here
	    int k=0;
	    
	    
	    
	    k=lisbinary(arr,n);
	    
	    return n-k;
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

	    

	    Solution ob;
	    cout << ob.minDeletions(arr, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends