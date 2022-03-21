class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        unordered_map <char,int> mp; //use unordered map for better time complexity as we don't want to mantain map in sorted order
        for(int i=0;i<n;i++){
            mp[s[i]] = i; //getting the last occurance of each char
        }
        vector <int> ans;
        
        int j=0; //for calculating size of each partition
        int end=0; //max last occurance of the char in the partition
        for(int i=0;i<n;i++){
            j++;
            if(mp[s[i]] > end){ //if the last occurance of a char is greater than end replace it
                end = mp[s[i]]; 
            }
            if(i == end){ //if we reach i'th index and the end is still pointing to same index, we can create a partiton 
                ans.push_back(j);
                j=0; //reset to calculate the size of next segment from 0 again
            }
        }
        return ans;
    }
};