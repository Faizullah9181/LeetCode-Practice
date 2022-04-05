class Solution {
public:
    int maxArea(vector<int>& a) {
        int ans = 0;
        int i = 0, j = a.size()-1; // creating two pointer i points to first and j points to second
        while(i<j) {
            if(a[i] >= a[j]) {
                ans = max(ans,(j-i)*a[j]); // (j-i) is base and a[j] is height
                j--;
            }
            else {
                ans = max(ans,(j-i)*a[i]);
                i++;
            }
        }
        return ans;
    }
};