class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open = 0, closed = 0;
        vector<int> o;
        int n = s.size();
        
        for(int i=0; i<n; i++){
            if(s[i] == ')'){
                closed++;
                if(closed > open){
//                     when closed is greater than open it means we  
//   have to  delete that closed bracket because that bracket cannot 
//  be balanced  further and when we delete that closed bracket 
//  count of closed bracket decreased by 1.
                    closed--;
                    s.erase(s.begin()+i);
                    i--;
                }
            }
            else if(s[i] == '('){
                o.push_back(i);
                open++;
            }
        }
        
//         And in last when all the unbalanced closed bracket would 
//    have been deleted in first traversal of string and still string 
//   is not balanced it means open is greater than closed and we
//    will have to delete open bracket from its last position.

        if(open > closed){
            int diff = open-closed;
            int last = o.size()-1;
            for(int i=diff; i>0; i--){
                s.erase(s.begin()+o[last]);
                last--;
            }
        }
        return s;
    }
};