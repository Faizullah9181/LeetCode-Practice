class Solution {
public:
//     void reverseString(vector<char>& s) {
        
       
            
             // reverse(s.begin(), s.end());
        
        
            
          
       
        
//     }
    
    void rec(vector<char>& s, int low, int high)
{
    if(low >= high)                  // Base Condition
        return;
    swap(s[low++], s[high--]);       // makes the problem smaller of same type            
    rec(s, low, high);
}
void reverseString(vector<char>& s) {
    rec(s, 0, s.size()-1);
}
};