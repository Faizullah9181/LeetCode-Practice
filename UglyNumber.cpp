/*
https://leetcode.com/problems/ugly-number/
https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // #define ull unsigned long long
    /* Function to get the nth ugly number*/
    ull getNthUglyNo(int n)
    {
        // code here
        long long c2 = 0, c3 = 0, c5 = 0;
        vector<long long> dp(n + 1);
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            dp[i] = min({2 * dp[c2], 3 * dp[c3], 5 * dp[c5]});
            if (2 * dp[c2] == dp[i])
                c2++;
            if (3 * dp[c3] == dp[i])
                c3++;
            if (5 * dp[c5] == dp[i])
                c5++;
        }
        return dp[n - 1];   //because 2*dp[c2+1]
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}

/* Leetcode Solution
    class Solution {
public:
    bool isUgly(int num) {
        if(num==0)
            return false;

        while(num%2==0){
            num/=2;
        }
        while(num%3==0){
            num/=3;
        }
        while(num%5==0){
            num/=5;
        }

        return(num==1)?true:false;

    }
};
*/